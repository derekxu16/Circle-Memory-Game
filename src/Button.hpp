//
//  Button.hpp
//  circleGame
//
//  Created by Derek Xu on 2017-06-11.
//
//

#ifndef Button_hpp
#define Button_hpp

#include <stdio.h>
#include "ofMain.h"

class ofApp;

class Button {
protected:
    ofColor color;
    string label;
public:
    Button();
    Button(float x_, float y_, float w, float h, string label_);
    float x, y, width, height;
    virtual void onClick(int x, int y, ofApp * app);
    static ofColor green;
    string getLabel();
};

#endif /* Button_hpp */
