//
//  Bomb.cpp
//  circleGame
//
//  Created by Derek Xu on 2017-05-21.
//
//

#include "Target.hpp"

Bomb::Bomb(float x_, float y_, float rad) : Circle(x_, y_, rad){
    color = red;
}

Bomb::Bomb(float x_, float y_, float rad, int time) : Circle(x_, y_, rad){
    color = red;
    fuseTime = time;
}
