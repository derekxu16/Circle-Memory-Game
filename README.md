# Circle-Memory-Game
A memory game that I'm making for my grade 12 computer science class. Developed in C++ with OpenFrameworks.cc

## Setting up environment

My game is built using OpenFrameworks for Mac OS. The version that I’m using is of_v0.9.8_osx_release.

The only file that requires to be changed is config.make. Currently it has the line # OF_ROOT = ../../../of_v0.9.8_osx_release, this is because my openframeworks folder is located 3 levels up from my project folder. You can move them within the same folder or one folder up, you just need to change the OF_ROOT path.

## Testing

I build and test my project with XCode, however after the makefile is set up it should work with any IDE. Additionally, a built version of the game can be found in the bin folder: “circleGameDebug.app”

## Gameplay

Instructions can be found through the HELP button in game. The game flashes several cirles at you for 5 seconds. You have to memorize their positions. Clicking the green circles will increase your score. Clicking the red circles will decrease your score and make you lose a life. Missing completely will make you lose a life. More circles will appear and the difficulty will increase as the game progresses.
