#include "ofApp.hpp"
#include "Game.hpp"
#include <vector>

//--------------------------------------------------------------

void ofApp::setup() {
    ofBackground(255, 255, 255);
    ofSetFrameRate(60);
	game.newRound(1);
}

//--------------------------------------------------------------

void ofApp::update() {
	game.update();
}

//--------------------------------------------------------------

void ofApp::draw() {
    ofFill();
	//Draws all circle objects to the screen
	game.draw();
}

//--------------------------------------------------------------

void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------

void ofApp::keyReleased(int key) {
    
}

//------------- -------------------------------------------------

void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------

void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------

void ofApp::mousePressed(int x, int y, int button) {
	game.mousePressed(x, y);
}

//--------------------------------------------------------------

void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------

void ofApp::mouseEntered(int x, int y) {
    
}

//--------------------------------------------------------------

void ofApp::mouseExited(int x, int y) {
    
}

//--------------------------------------------------------------

void ofApp::windowResized(int w, int h) {
    
}

//--------------------------------------------------------------

void ofApp::gotMessage(ofMessage msg) {
    
}

//--------------------------------------------------------------

void ofApp::dragEvent(ofDragInfo dragInfo) {
    
}
