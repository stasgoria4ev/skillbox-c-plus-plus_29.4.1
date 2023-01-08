#pragma once
#include "Talent.h"

class Counting : public Talent {
    void addTalents() override {
        talents.push_back("Count");
    }
public:
    Counting() {
        addTalents();
    }    
};