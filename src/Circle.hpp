/*
 * File:   Circle.h
 * Author: Derek
 *
 * Created on May 18, 2017, 5:56 PM
 */

#ifndef CIRCLE_H
#define	CIRCLE_H

#include "ofMain.h"

class Circle {
private:
    bool visible;
    
public:
    float x, y, radius;
    Circle();
    Circle(float x_, float y_, float rad);
    static ofColor green, red;
    
    float distance(int mouseX, int mouseY);
    bool isVisible();
    void setVisibility(bool vis);
    ofColor color;
    bool onClick(int x, int y);
};

#endif	/* CIRCLE_H */

