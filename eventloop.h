#ifndef EVENTLOOP_H
#define EVENTLOOP_H
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include "gamecharacter.h"
class EventLoop {
    public:
        std::vector<GameCharacter> characterList;

        EventLoop();
        ~EventLoop();
};
#endif