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

#include "PokemonId.h"

#include <string>
#include <map>
#include <jsoncpp/json/value.h>

class Pokemon;
class PokemonSpecies;


class PokemonFactory
{

  public:

    /// Must be called once per process before use of this class.
    static void initialize();

    /// Should be called at the end of the process. Will prevent memory leaks.
    static void destroy();

    /// Create pokemon of the species id. Calling function must de-allocate.
    static Pokemon* createPokemon(PokemonId speciesId, std::string nickname);

    /// Get all pokemon species
    static const std::map<PokemonId, const PokemonSpecies*> getAllSpecies();

  private:
    
    /// Holds one of each pokemon species objects
    static std::map<PokemonId, PokemonSpecies*> allSpecies;

    /// Parses the Json value and adds it to the species container
    static void addPokemon(Json::Value& value);

};

#endif // POKEMON_FACTORY_H_

