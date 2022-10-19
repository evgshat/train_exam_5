#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        // std::map<std::string, ASpell*> spells;
        Spellbook book;
    public:
        Warlock();
        ~Warlock();
        Warlock(const Warlock& other);
        const Warlock &operator=(const Warlock& other);

        const std::string getName() const;
        const std::string geTitle() const;
        void setTitle(const std::string& o_title);
        Warlock(const std::string& o_name, const std::string& o_title);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(const std::string& spell_name);
        void launchSpell(const std::string& spell_name, const ATarget& tar);
};
