#include "ofApp.h"
#include "Circle.h"
#include <vector>

//--------------------------------------------------------------

void ofApp::setup() {
    ofBackground(255, 255, 255);
    ofSetFrameRate(60);
	//Width and Height of the window
	const int HEIGHT = 768, WIDTH = 1024;
	const int RADIUS = 45; //Radius of each circle
	int gap = (RADIUS + 5) * 2; //Ensures no circles are placed offscreen
	
    float x, y;
    
    for (int i = 0; i < 10; i ++) { //Draws 10 circles to the screen
        //Generate random coordinates to draw a new circle
        bool valid = false;
        while (!valid) {
            valid = true;
            y = ofRandom(gap,HEIGHT);
            x = ofRandom(gap,WIDTH-gap);
            for (Circle c : circles) {
                //Ensures that a circle will not be placed on another circle
                if (c.distance(x,y) < 2 * c.radius) {
                    valid = false;
                    break;
                }
            }
        }
        circles.push_back(Circle(x,y,RADIUS));
    }
}

//--------------------------------------------------------------

void ofApp::update() {
	int time = ofGetElapsedTimef();
	if (time == 5) {
		for (int i = 0; i < circles.size(); i ++) {
			circles[i].setVisibility(false);
		}
	}
}

//--------------------------------------------------------------

void ofApp::draw() {
    ofFill();
    //ofSetHexColor(0xe0be21);
    //Draws all circle objects to the screen
    ofSetCircleResolution(100);
    for (int i = 0; i < circles.size(); i ++) {
		if (circles[i].isVisible()) { //Check if circle should be hidden
			ofSetColor(circles[i].color); //Chooses the correct color
			ofDrawCircle(circles[i].x, circles[i].y, circles[i].radius); //Draw circle
		}
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
		if (circles[i].distance(x,y) < circles[i].radius) {
            circles[i].color = circles[i].color == circles[i].green ? circles[i].red : circles[i].green;
			circles[i].setVisibility(true);
		}
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
