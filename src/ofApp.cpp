#include "ofApp.h"
#include "Circle.h"
#include <vector>

//--------------------------------------------------------------

void ofApp::setup() {
  ofBackground(255, 255, 255);
  ofSetFrameRate(60);
  float x, y;
  
  for (int i = 0; i < 10; i ++) { //Draws 10 circles to the screen
    //Generate random coordinates to draw a new circle  
    x = ofRandom(50,718);
    y = ofRandom(50,1024-5);
    circles.push_back(Circle(x,y,50));
  }
}

//--------------------------------------------------------------

void ofApp::update() {
}

//--------------------------------------------------------------

void ofApp::draw() {
  ofFill();
  //ofSetHexColor(0xe0be21);
  //Draws all circle objects to the screen
  for (int i = 0; i < circles.size(); i ++) {
    ofSetColor(circles[i].color); //Chooses the correct color
    ofDrawCircle(circles[i].x, circles[i].y, circles[i].radius); //Draw circle
  }
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
  for (int i = 0; i < circles.size(); i ++) {
    //Checks if the mouse click happened inside any of the circles
    if (circles[i].distance(x,y) < circles[i].radius)
      circles[i].color = circles[i].color == circles[i].green ? circles[i].red : circles[i].green;
  }
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
