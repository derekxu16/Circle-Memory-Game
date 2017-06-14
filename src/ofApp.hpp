#pragma once

#include "ofMain.h"

#include <vector>
#include "Game.hpp"

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
public:
   
   void setup();
   void update();
   void draw();
   
   void keyPressed(int key);
   void keyReleased(int key);
   void mouseMoved(int x, int y);
   void mouseDragged(int x, int y, int button);
   void mousePressed(int x, int y, int button);
   void mouseReleased(int x, int y, int button);
   void mouseEntered(int x, int y);
   void mouseExited(int x, int y);
   void windowResized(int w, int h);
   void dragEvent(ofDragInfo dragInfo);
   void gotMessage(ofMessage msg);
};


