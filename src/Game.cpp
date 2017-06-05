//
//  Game.cpp
//  circleGame
//
//  Created by Derek Xu on 2017-05-23.
//
//

#include "ofMain.h"
#include "Game.hpp"

Game::Game() {
    // Begin at round 1
    round = 1;
}

void Game::newRound(int difficulty) {
    //Store start time of this round
    startTime = ofGetElapsedTimef();
    //Prevents player from clicking targets before they've been hidden
    allowClicks = false;
    int numTargets, numBombs;
    switch (difficulty) {
            // Set the number of targets and bombs in the current round
        case 1:
            numTargets = 2;
            numBombs = 0;
            break;
        case 2:
            numTargets = 2;
            numBombs = 1;
            break;
        case 3:
            numTargets = 3;
            numBombs  = 1;
            break;
        case 4:
            numTargets = 4;
            numBombs = 2;
            break;
    }
    
    //Width and Height of the window
    const int HEIGHT = 768, WIDTH = 1024;
    const int RADIUS = 45; //Radius of each circle
    int gap = (RADIUS + 5) * 2; //Ensures no targets are placed offscreen
    
    float x, y;
    
    // Removes the current circles from the screen
    targets.clear();
    bombs.clear();
    
    for (int i = 0; i < numTargets; i ++) { //Draws the desired number of targets to the screen
        //Generate random coordinates to draw a new circle
        bool valid = false;
        while (!valid) {
            valid = true;
            y = ofRandom(gap,HEIGHT);
            x = ofRandom(gap,WIDTH-gap);
            for (Target c : targets) {
                //Ensures that a circle will not be placed on another circle
                if (c.distance(x,y) < 2 * c.radius) {
                    valid = false;
                    break;
                }
            }
        }
        targets.push_back(Target(x,y,RADIUS));
    }
}

int Game::getDifficulty() {
    // Determines the difficulty based on the round number
    if (round >= 1 && round <= 2) {
        return 1;
    } else if (round > 2 && round <= 5) {
        return 2;
    }
}

void Game::draw() {
    //Draws score
    ofSetColor(0,0,0);
    ofDrawBitmapString("Score " + to_string(score), 20, 20);
    
    //Draws all circle objects to the screen
    ofSetCircleResolution(100);
    for (int i = 0; i < targets.size(); i ++) {
        if (targets[i].isVisible()) { //Check if circle should be hidden
            ofSetColor(targets[i].color); //Chooses the correct color
            ofDrawCircle(targets[i].x, targets[i].y, targets[i].radius); //Draw circle
        }
    }
    
    for (int i = 0; i < bombs.size(); i ++) {
        if (bombs[i].isVisible()) { //Check if circle should be hidden
            ofSetColor(bombs[i].color); //Chooses the correct color
            ofDrawCircle(bombs[i].x, bombs[i].y, bombs[i].radius); //Draw circle
        }
    }
}

void Game::update() {
    float currTime = ofGetElapsedTimef();
    if (!allowClicks && currTime - startTime >= 5) {
        allowClicks = true; //Allow the user to click hidden circles
        for (int i = 0; i < targets.size(); i ++) {
            targets[i].setVisibility(false);
        }
    }
}

void Game::mousePressed(int x, int y) {
    if (allowClicks) {
        for (int i = 0; i < targets.size(); i ++) {
            //Checks if the mouse click happened inside any of the targets
            if (targets[i].distance(x,y) < targets[i].radius) {
                //targets[i].color = targets[i].color == targets[i].green ? targets[i].red : targets[i].green;
                targets[i].setVisibility(true);
                updateScore(1);
            }
        }
        
        if (isFinished()) {
            //When all targets have been clicked, increase the round number and start a new round
            round ++;
            newRound(getDifficulty());
        }
    }
}

void Game::updateScore(int) {
    //When a target is hit, increase the score accordingly
    score ++;
}

bool Game::isFinished() {
    //If all targets have been found, start a new round
    for (Target target : targets) {
        if (!target.isVisible()) {
            return false;
        }
    }
    return true;
}
