// 
// File: Seeding.cpp 
// 
// Author: Sam Clotfelter
// 
// //////////////////////////////////////////////////////////////////// 

#include "MinorAffliction.h"
#include "Move.h"
#include "Battle.h"

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;


Seeding::Seeding(Pokemon& afflictedPokemon)
:MinorAffliction("Seeding", afflictedPokemon)
{
    turnsLeft = (rand() % 4) + 2;
}


bool Seeding::isFinished()
{
    return turnsLeft == 0;
}

void Seeding::onRoundEnd(Pokemon& enemyPokemon)
{
    // do damage and heal
    int damage = Battle::roundDamage(afflictedPokemon.getMaxHp() / 8.0);
    afflictedPokemon.changeHp(-damage);
    enemyPokemon.changeHp(damage);

    cout << "Leech seed sucked " << damage << " damage." << endl;
}

