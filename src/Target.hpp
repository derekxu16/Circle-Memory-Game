//
//  Target.h
//  circleGame
//
//  Created by Derek Xu on 2017-05-20.
//
//

#ifndef Target_h
#define Target_h

#include "Circle.hpp"

class Target : public Circle {
public:
    Target();
    Target(float x_, float y_, float rad);
};

class Bomb : public Circle {
public:
    Bomb();
    Bomb(float x_, float y_, float rad);
    Bomb(float x_, float y_, float rad, int danger_);
    int getDanger();
    
private:
    int danger;
};


#endif /* Target_h */
