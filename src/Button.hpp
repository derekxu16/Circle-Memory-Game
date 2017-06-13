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

class Button {
private:
    int x, y, length, width;
public:
    Button(int x_, int y_, int l, int w);
    virtual void onClick() = 0;
};

#endif /* Button_hpp */
