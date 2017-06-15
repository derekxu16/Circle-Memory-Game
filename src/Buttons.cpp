//
//  Buttons.cpp
//  circleGame
//
//  Created by Derek Xu on 2017-06-12.
//
//

#include "Buttons.hpp"
#include "ofApp.hpp"

PlayBtn::PlayBtn(int x_, int y_, int l, int w, string label) : Button(x_, y_, l, w, label){
    color = green;
}

void PlayBtn::onClick(int x, int y, ofApp *app) {
    if (this->x < x && x < this->x + this->width && this->y < y && y < this->y + this->height) {
        app->changeScreen(1);
        return 1;
    }
}

HelpBtn::HelpBtn(int x_, int y_, int l, int w, string label) : Button(x_, y_, l, w, label){
    color = yellow;
}

void HelpBtn::onClick(int x, int y, ofApp *app) {
    if (this->x < x && x < this->x + this->width && this->y < y && y < this->y + this->height) {
        app->changeScreen(2);
        return 1;
    }
}
