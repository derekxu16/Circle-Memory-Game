//
//  Button.cpp
//  circleGame
//
//  Created by Derek Xu on 2017-06-11.
//
//

#include "Button.hpp"
#include "ofApp.hpp"

ofColor Button::green = ofColor(51, 204, 51);
ofColor Button::yellow = ofColor(244, 206, 66);

Button::Button() {
}

Button::Button(float x_, float y_, float w, float h, string label_) {
    x = x_;
    y = y_;
    width = w;
    height = h;
    label = label_;
}

void Button::onClick(int x, int y, ofApp * app) {
}

string Button::getLabel() {
    return label;
}

ofColor Button::getColor() {
    return color;
}
