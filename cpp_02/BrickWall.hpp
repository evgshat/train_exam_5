#pragma once
#include <iostream>
#include "ATarget.hpp"

class BrickWall: public ATarget
{
    public:
        BrickWall(): ATarget("Target Practice Dummy") {};
        ~BrickWall() {};

        ATarget* clone() const;
};