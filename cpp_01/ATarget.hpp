#pragma once
#include <iostream>
#include "ASpell.hpp"

class ATarget
{
    protected:
        std::string type;
    public:
        ATarget();
        virtual ~ATarget();
        ATarget (const ATarget& other);
        const ATarget &operator=(const ATarget& other);

        ATarget(std::string o_type);
        const std::string getType() const;
        virtual ATarget* clone() const = 0; 
        void getHitBySpell(const ASpell& spell) const;
};