#pragma once
#include "Talent.h"
#include <iostream>
#include <string>

class Dog {
private:
    std::string name;
public:
    Dog (std::string inName) : name(inName) {};
    
    void show_talents() {
        std::cout << "This is " << name << " and it has some talents:\n";
        for (int i = 0; i < talents.size(); i++)
            std::cout << "It can \"" << talents[i] << "\"\n";
    }
};