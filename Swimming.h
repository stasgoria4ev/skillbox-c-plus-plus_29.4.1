#pragma once
#include "Talent.h"
#include <iostream>

class Swimming : public Talent {
    void addTalents() override {
        std::cout << "Swim";
    }
};