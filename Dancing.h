#pragma once
#include "Talent.h"

class Dancing : public Talent {
    void addTalents() override {
        talents.push_back("Dance");
    }
public:
    Dancing() {
        addTalents();
    }
};