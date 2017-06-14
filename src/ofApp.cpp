#include "ofApp.hpp"
#include "Game.hpp"
#include <vector>

//--------------------------------------------------------------

void ofApp::setup() {
    ofBackground(255, 255, 255);
    ofSetFrameRate(60);
	game = Game(this);
	menu = Menu(this);
	screen = 0;
}

//--------------------------------------------------------------

void ofApp::update() {
	if (screen == 0) {
		
	} else {
		game.update();
	}
}

//--------------------------------------------------------------

void ofApp::draw() {
    ofFill();
	//Draws all circle objects to the screen
	if (screen == 0) { //Draws either the menu or the screen
		menu.draw();
	} else {
		game.draw();
	}
}

void ofApp::changeScreen(int newScreen) {
	if (newScreen == 1)
		//When the menu switches to the gameplay, reset the game
		newGame();
	screen = newScreen;
}

void ofApp::mousePressed(int x, int y, int button) {
	if (screen == 0) {
		menu.mousePressed(x, y);
	} else {
		game.mousePressed(x, y);
	}
}

void ofApp::newGame() {
	game.reset();
	game.newRound(1);
	game.openFiles();
}
