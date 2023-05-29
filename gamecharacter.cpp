#include "gamecharacter.h"


GameCharacter::GameCharacter(std::string name,unsigned int maxHP, unsigned int APR, unsigned int DPS, bool faction){
    characterName    = name;
    maxHitPoints     = maxHP;
    currentHitPoints = maxHP;
    APR              = APR;
    damagePerSwing   = DPS;
    status           = true; //dead or alive
    alignment        = faction;
}
GameCharacter::GameCharacter(){}
GameCharacter::~GameCharacter(){}
void GameCharacter::takeDamage(unsigned int damage){
    currentHitPoints -= damage;
    if (currentHitPoints <= 0){
        status = false;
    }
}
void GameCharacter::attackTarget(GameCharacter &target){
    if (alignment != target.alignment){
        target.takeDamage(damagePerSwing);
    }

}