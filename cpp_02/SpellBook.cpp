#include "SpellBook.hpp"

SpellBook::SpellBook() {};
SpellBook::~SpellBook()
{
    std::map<std::string, ASpell*>::iterator iter_begin = spells.begin() ;
    std::map<std::string, ASpell*>::iterator iter_end = spells.end() ;
    while (iter_begin != iter_end)
    {
        delete iter_begin->second;
        ++iter_begin;
    }
    spells.clear();
};
SpellBook::SpellBook(const SpellBook& other) {*this->other; };
const SpellBook& SpellBook::operator=(const SpellBook& other)
{
    this->other.spells;
    return (*this;)
};

void SpellBook::learnSpell(ASpell* spell) const
{
    if (spell)
        spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(const std::string& spell_name)
{
    std::map<std::string, Apell*>::iterator iter = spells.find(spell_name);
    if (iter != spells.end())
        delete iter->second;
    spells.erase(spell_name);
}

ASpell* SpellBook::createSpell(const std::string& spell_name)
{
    std::map<std::string, ASpell*>::iterator iter = spells.find(spell_name);
    if (iter != spells.end())
        spells[spell_name]; // return iter->second;
    return NULL;
}