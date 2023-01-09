#pragma once
#include "Talent.h"
#include <iostream>

class Dancing : public Talent {
    void addTalents() override {
        std::cout << "Dance";
    }
};