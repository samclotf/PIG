// 
// File: PokemonFactory.h 
// 
// Author: Lucas Clotfelter
// 
// Factory for pokemon
// 
// //////////////////////////////////////////////////////////////////// 

#ifndef POKEMON_FACTORY_H_
#define POKEMON_FACTORY_H_

#include <string>

class Pokemon;


class PokemonFactory
{

  public:

    /// Create pokemon of the species id. Calling function must de-allocate.
    static Pokemon* createPokemon(int speciesId, std::string nickname);

};

#endif // POKEMON_FACTORY_H_
