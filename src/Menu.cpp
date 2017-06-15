//
//  Menu.cpp
//  circleGame
//
//  Created by Derek Xu on 2017-06-11.
//
//

#include "Menu.hpp"
#include "ofMain.h"
#include "Buttons.hpp"

Menu::Menu() : NUM_BUTTONS(0) {
    
}

Menu::Menu(ofApp * app_) : NUM_BUTTONS(2) {
    app = app_;
    labelFont.load("../../fonts/gill.ttf", 30);
    
    //Initialize all the buttons
    buttons.push_back(new PlayBtn (1024/2 - 200/2, 768/2 - 150,200,100, "Play"));
    buttons.push_back(new HelpBtn (1024/2 - 200/2, 768/2 +50,200,100, "Help"));
}

void Menu::draw() {
    //Size of the window
    const int WIDTH = 1024, HEIGHT = 768;
    string title = "Circle Memory Test";
    
    labelFont.drawString(title, WIDTH/2 - labelFont.stringWidth(title)/2, 80);
    
    //Draws all buttons to the screen
    for (int i = 0; i < NUM_BUTTONS; i ++) {
        ofSetColor(ofColor(51, 204, 51));
        ofDrawRectangle(buttons[i]->x, buttons[i]->y, buttons[i]->width, buttons[i]->height);
        ofSetColor(0,0,0);
        //Gets the width and height of the current string so the label can be centered
        int currWidth = labelFont.stringWidth(buttons[i]->getLabel());
        int currHeight = labelFont.stringHeight(buttons[i]->getLabel());
        labelFont.drawString(buttons[i]->getLabel(), buttons[i]->x + buttons[i]->width/2 - currWidth/2, buttons[i]->y + buttons[i]->height/2 + currHeight/2);
    }
}

void Menu::mousePressed(int x, int y) {
    for (int i = 0; i < NUM_BUTTONS; i ++) {
        buttons[i]->onClick(x, y, app);
        //Checks if the mouse click happened inside any of the hidden targets
    }
}

Menu::~Menu() {
    buttons.clear();
}
