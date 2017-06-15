#pragma once

#include "ofMain.h"

#include <vector>
#include "Game.hpp"
#include "Menu.hpp"

typedef struct {
   float x;
   float y;
   bool bBeingDragged;
   bool bOver;
   float radius;
   
} draggableVertex;

class ofApp : public ofBaseApp {
private:
   Game game;
   Menu menu;
   ofImage help;
   int screen;
public:
   
   void setup();
   void update();
   void draw();
   
   void mousePressed(int x, int y, int button);
   
   void newGame();
   void changeScreen(int newScreen);
};


