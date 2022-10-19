#include "ATarget.hpp"

// ATarget::ATarget();
// ATarget::ATarget (const ATarget& other);
// const ATarget::ATarget (const ATarget& other);

ATarget::ATarget(std::string o_type)
{
    this->type = o_type;
};

const std::string ATarget::getType() const {return this->type ;};

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::ATarget() {};
ATarget::~ATarget() {};
ATarget::ATarget (const ATarget& other) {*this=other;};
const ATarget &ATarget::operator=(const ATarget& other)
{
    this->type = other.type;
    return (*this);
}

