#pragma once
#include "Talent.h"
#include <iostream>

class Counting : public Talent {
    void addTalents() override {
        std::cout << "Count";
    }  
};