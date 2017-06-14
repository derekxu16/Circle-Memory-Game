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
#include <vector>
#include <fstream>
#include "Target.hpp"

class Game {
private:
    int score, numTargets, numBombs, lives;
    vector<int> leaderboard;
    float startTime;
    bool allowClicks, gameOver;
    Target* targets;
    Bomb* bombs;
    ifstream iLeaderboard;
    ofstream oLeaderboard;
    
public:
    Game();
    
    int round;
    void newRound(int difficulty);
    int getDifficulty();
    
    void draw();
    void update();
    void mousePressed(int x, int y);
    
    void updateScore(int change);
    void updateLives();
    bool isFinished();
    void loadScores();
    void sortScores();
};

#endif /* Game_hpp */
