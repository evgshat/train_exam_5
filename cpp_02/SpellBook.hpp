#pragma once
#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        std::map<std::string, ASpell*> spells;

    public:
        SpellBook();
        ~SpellBook();
        SpellBook(const SpellBook& other);
        const SpellBook& operator=(const SpellBook& other);

        void learnSpell(ASpell* spell) const;
        void forgetSpell(const std::string& spell_name);
        ASpell* createSpell(const std::string& spell_name);
}