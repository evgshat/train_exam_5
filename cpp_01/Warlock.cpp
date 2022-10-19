#include "Warlock.hpp"

//  Warlock();
Warlock::~Warlock()
{
   std::cout << this->getName() << "My job here is done!" << std::endl;
   std::map<std::string, ASpell*>::iterator iter;
   for (iter = spells.begin(); iter!= spells.end(); iter++)
        delete iter->second;
    this->spells.clear();
};
// Warlock(const Warlock& other);
// const Warlock &operator=(const Warlock& other);

const std::string Warlock::getName() const {return this->name; };
const std::string Warlock::geTitle() const {return this->title; }; 
void Warlock::setTitle(const std::string& o_title)
{
    this->title = o_title;
};

Warlock::Warlock(const std::string& o_name, const std::string& o_title)
{
    this->name = o_name;
    this->title = o_title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

void Warlock::introduce() const
{
    std::cout << this->getName() << "I am " << this->getName() << ", " << this->geTitle() << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    if (spell)
        spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(const std::string& spell_name)
{
    std::map<std::string, ASpell*>::iterator iter;
    iter = spells.find(spell_name);
    if (iter != spells.end())
        delete iter->second;
    spells.erase(spell_name);
}

void Warlock::launchSpell(const std::string& spell_name, const ATarget& tar)
{
    ASpell* spell = spells[spell_name];
    if (spell)
        spell->launch(tar);
}