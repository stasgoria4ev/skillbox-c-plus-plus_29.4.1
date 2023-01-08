#pragma once
#include "Talent.h"

class Swimming : public Talent {
    void addTalents() override {
        talents.push_back("Swim");
    }
public:
    Swimming() {
        addTalents();
    }    
};