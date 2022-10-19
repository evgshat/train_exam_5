#pragma once
#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell
{
    public:
        Fwoosh(): ASpell("Fwoosh", "fwooshed") {};
        ~Fwoosh() {};
        // Fwoosh (const Fwoosh& other);
        // const Fwoosh &operator=(const Fwoosh& other);
        
        ASpell* clone() const;
};