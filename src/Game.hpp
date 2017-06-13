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
    int score, round, numTargets, numBombs, lives;
    float startTime;
    bool allowClicks, gameOver;
    Target* targets;
    Bomb* bombs;
    
public:
    Game();
    
    void newRound(int difficulty);
    int getDifficulty();
    
    void draw();
    void update();
    void mousePressed(int x, int y);
    
    void updateScore(int change);
    void updateLives();
    bool isFinished();
    
};

#endif /* Game_hpp */
