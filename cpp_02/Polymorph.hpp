#pragma once
#include <iostream>
#include "ASpell.hpp"

class Polymorph: public ASpell
{
    public:
        Polymorph(): ASpell("Fireball", "burnt to a crisp") {};
        ~Polymorph() {};
        
        ASpell* clone() const;
};