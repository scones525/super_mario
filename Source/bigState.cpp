#include <array>
#include <chrono>
#include <cmath>

#include <SFML/Graphics.hpp>
#include "Headers/Animation.hpp"
#include "Headers/Global.hpp"
#include "Headers/MapManager.hpp"
#include "Headers/Mushroom.hpp"
#include "Headers/Mario.hpp"
#include "Headers/bigState.hpp"

bigState::bigState()
:MarioState(std::string("big")){
}

bigState::~bigState(){}

void bigState::bigTosmall(Mario *mario){
    mario -> setState(Mario::ST_small);
}