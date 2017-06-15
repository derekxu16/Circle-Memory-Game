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

class ofApp;

class PlayBtn : public Button {
public:
    PlayBtn(int x_, int y_, int l, int w, string label);
    void onClick(int x, int y, ofApp * app);
};

class HelpBtn : public Button {
public:
    HelpBtn(int x_, int y_, int l, int w, string label);
    void onClick(int x, int y, ofApp * app);
};

#endif /* Buttons_hpp */
