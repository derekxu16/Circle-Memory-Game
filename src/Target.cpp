//
//  Target.cpp
//  circleGame
//
//  Created by Derek Xu on 2017-05-21.
//
//

#include "Target.hpp"

Target::Target() {
    
}

Target::Target(float x_, float y_, float rad) : Circle(x_, y_, rad) {
    color = green;
}
