#include "ASpell.hpp"

// ASpell();
// ASpell (const ASpell& other);
// const ASpell &operator=(const ASpell& other);

ASpell::ASpell() {};

ASpell::ASpell (const ASpell& other) { *this=other; };

const ASpell &ASpell::operator=(const ASpell& other)
{
    this->name = other.name;
    this->effects = other.effects;
    return (*this);
}

const std::string ASpell::getName() const {return this->name; };
const std::string ASpell::getEffects() const {return this->effects; };

ASpell::ASpell(const std::string o_name, const std::string o_effects)
{
    this->name = o_name;
    this->effects = o_effects;
}

void ASpell::launch(const ATarget& target) const
{
    target.getHitBySpell((*this));
}

ASpell::~ASpell() {};