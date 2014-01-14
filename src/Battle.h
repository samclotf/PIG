// 
// File: Battle.h 
// 
// Author: Lucas Clotfelter
// 
// This class's functions will process a single battle step
// 
// //////////////////////////////////////////////////////////////////// 

#ifndef BATTLE_H_
#define BATTLE_H_

class Pokemon;
class Move;


class Battle
{

  public:

    /// Performs a battle on the two pokemon using the move. Move must belong
    /// to attacking pokemon.
    static void doBattle(Pokemon& attacking, Pokemon& defending, Move& move);

  private:

    /// Returns the damage that the move does to the defending pokemon.
    static int getDamage(Pokemon& attacking, Pokemon& defending, Move& move);

};

#endif // BATTLE_H_
