//
//  Buttons.hpp
//  circleGame
//
//  Created by Derek Xu on 2017-06-12.
//
//

#ifndef Buttons_hpp
#define Buttons_hpp

#include <stdio.h>
#include "Button.hpp"

class PlayBtn : public Button{
public:
    PlayBtn(int x_, int y_, int l, int w);
    void onClick();
};

#endif /* Buttons_hpp */
