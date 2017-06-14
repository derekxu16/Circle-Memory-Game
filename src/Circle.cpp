#include "Circle.hpp"
#include <cmath>

ofColor Circle::green = ofColor(0, 170, 81);
ofColor Circle::red = ofColor(255, 51, 0);

Circle::Circle() {
    
}

Circle::Circle(float x_, float y_, float rad) {
    x = x_;
    y = y_;
    radius = rad;
    visible = true;
}

float Circle::distance(int mouseX, int mouseY) {
    return sqrt(pow(mouseX - x, 2) + pow(mouseY - y, 2));
}

bool Circle::isVisible() {
    return visible;
}

void Circle::setVisibility(bool vis) {
    visible = vis;
}

bool Circle::onClick(int x, int y) {
    if (!isVisible() && distance(x,y) < radius) {
        setVisibility(true);
        return 1;
    } else {
        return 0;
    }
}
