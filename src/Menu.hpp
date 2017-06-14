//
//  Menu.hpp
//  circleGame
//
//  Created by Derek Xu on 2017-06-11.
//
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Button.hpp"
#include <vector>

class ofApp;

class Menu {
private:
    ofTrueTypeFont labelFont;
    ofApp * app;
    std::vector<Button*> buttons;
    int NUM_BUTTONS;
public:
    Menu();
    ~Menu();
    Menu(ofApp * app_);
    void draw();
    void mousePressed(int x, int y);
};

#endif /* Menu_hpp */
