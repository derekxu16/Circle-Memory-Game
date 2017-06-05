//
//  Game.hpp
//  circleGame
//
//  Created by Derek Xu on 2017-05-23.
//
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Target.hpp"
#include <vector>

class Game {
private:
    int score, round;
    float startTime;
    bool allowClicks;
    vector<Bomb> bombs;
    
public:
    Game();
    vector<Target> targets;
    
    void newRound(int difficulty);
    int getDifficulty();
    
    void draw();
    void update();
    void mousePressed(int x, int y);
    
    void updateScore(int score);
    bool isFinished();
    
};

#endif /* Game_hpp */
