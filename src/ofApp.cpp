#include "ofApp.hpp"
#include "Game.hpp"
#include <vector>

void ofApp::setup() {
    ofBackground(255, 255, 255);
    ofSetFrameRate(60);
	help.load("instructions.png");
	game = Game(this);
	menu = Menu(this);
	screen = 0;
}

void ofApp::update() {
	if (screen == 0) {
		
	} else if (screen == 1) {
		game.update();
	}
}

//--------------------------------------------------------------

void ofApp::draw() {
    ofFill();
	//Draws all circle objects to the screen
	if (screen == 0) { //Draws either the menu, the screen or the instructions
		menu.draw();
	} else if (screen == 1){
		game.draw();
	} else {
		ofSetColor(255,255,255);
		help.draw(0,0, 1024, 768);
	}
}

void ofApp::changeScreen(int newScreen) {
	if (newScreen == 1) {
		//When the menu switches to the gameplay, reset the game
		newGame();
	}
	else if (newScreen == 2) {
	}
	screen = newScreen;
}

void ofApp::mousePressed(int x, int y, int button) {
	if (screen == 0) {
		//Handle mouse clicked in game
		menu.mousePressed(x, y);
	} else if (screen == 1) {
		//Handle mouse clicked in the menu
		game.mousePressed(x, y);
	} else {
		//Whenever the player clicks on the settings screen, return to the menu
		screen = 0;
	}
}

void ofApp::newGame() {
	game.reset();
	game.newRound(1);
}
