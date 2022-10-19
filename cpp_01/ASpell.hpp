#pragma once
#include <iostream>

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        virtual ~ASpell();
        ASpell (const ASpell& other);
        const ASpell &operator=(const ASpell& other);

        const std::string getName() const;
        const std::string getEffects() const;
        virtual ASpell* clone() const = 0;

        ASpell(const std::string o_name, const std::string o_effects);
        void launch(const ATarget& target) const; 
};

#include "ATarget.hpp"