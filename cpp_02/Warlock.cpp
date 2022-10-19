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
   book.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string& spell_name)
{
   book.forgetSpell(spell_name);
}

void Warlock::launchSpell(const std::string& spell_name, const ATarget& tar)
{
    const ATarget *test = 0;
    if (test == &tar)
        return;
    
    ASpell* spell = book.createSpell(name_spell);
    if (spell)
        spell->launch(tar);
}