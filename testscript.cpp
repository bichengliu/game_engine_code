#include <stdio.h>
#include <iostream>
#include <string>
#include "gamecharacter.h"
int main(){
    GameCharacter myCharacter("Bob",14,1,12,true);
    GameCharacter testGoblin("Goblin",8,1,12,true);
    myCharacter.attackTarget(testGoblin);

    std::cout << "The goblin's hp is: " << testGoblin.currentHitPoints<< " and status: " << testGoblin.status << std::endl;
}