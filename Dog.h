#pragma once
#include <iostream>
#include <string>
#include <vector>

class Dog {
private:
    std::string name;
public:
    std::vector <Talent*> talents;

    Dog (std::string inName) : name(inName) {};
    
    void show_talents() {
        std::cout << "This is " << name << " and it has some talents:\n";
        for (int i = 0; i < talents.size(); i++) {
            std::cout << "It can \"";
            talents[i]->addTalents();
            std::cout << "\"\n";
        }
    }
};