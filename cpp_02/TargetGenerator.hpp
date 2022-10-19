#pragma once
#include <iostream>
#include "Target.hpp"
#include <map>

class TargetGenerator
{
    private:
        std::map<std::string, ATarget*> targs;
    public:
        TargetGenerator();
        ~TargetGenerator();
        TargetGenerator(const TargetGenerator& other);
        const TargetGenerator& operator=(const TargetGenerator& other);

        void learnTargetType(ATarget* tag);
        void forgetTargetType(const std::string& tag);
        ATarget* createTarget(const std::string& tag);
};