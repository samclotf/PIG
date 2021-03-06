// 
// File: Flinch.cpp 
// 
// Author: Sam Clotfelter
// 
// //////////////////////////////////////////////////////////////////// 

#include "MinorAffliction.h"
#include "Pokemon.h"
#include "Move.h"
#include "Battle.h"

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;


Flinch::Flinch(Pokemon& afflictedPokemon)
:MinorAffliction("Flinch", afflictedPokemon)
{
}


bool Flinch::whenAttacks(Pokemon& defending)
{
    cout << afflictedPokemon.getNickname() << " flinched." << endl;
    return true;
}


bool Flinch::isFinished()
{
    return true;
}

