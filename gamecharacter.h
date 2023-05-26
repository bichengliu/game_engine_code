#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
#include <stdio.h>
#include <string>
class GameCharacter {
    public:
        unsigned int maxHitPoints;
        int currentHitPoints;
        unsigned int APR;
        unsigned int damagePerSwing;
        bool         status; //dead or alive


        std::string  characterName;
        GameCharacter();
        ~GameCharacter();
        GameCharacter(std::string name,unsigned int maxHP, unsigned int APR, unsigned int DPS);
        void takeDamage(unsigned int damage);

};
#endif