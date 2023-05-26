#include <stdio.h>
#include <iostream>
#include <string>
#include "gamecharacter.h"
int main(){
    GameCharacter myCharacter("Bob",14,1,12);
    myCharacter.takeDamage(12);

    std::cout << "The character's hp is: " << myCharacter.currentHitPoints<< " and status: " << myCharacter.status << std::endl;
}