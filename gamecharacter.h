#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
#include <stdio.h>
#include <string>
#include <iostream>
class GameCharacter {
    public:
        unsigned int maxHitPoints;
        int currentHitPoints;
        unsigned int APR;
        unsigned int damagePerSwing;
        bool         status; //dead or alive
        bool         alignment;


        std::string  characterName;
        GameCharacter();
        ~GameCharacter();
        GameCharacter(std::string name,unsigned int maxHP, unsigned int APR, unsigned int DPS, bool faction);
        
        void takeDamage(unsigned int damage);
        void attackTarget(GameCharacter &target);
};
#endif