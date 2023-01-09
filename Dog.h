#pragma once
#include <iostream>
#include <string>
#include <vector>

class Dog {
private:
    std::string name;
    std::vector <Talent*> talents;
public:
    void addTalents(Talent* talent) {
        talents.push_back(talent);
    }
    
    Dog (std::string inName) : name(inName) {};
    ~Dog () {};
    
    void show_talents() {
        std::cout << "This is " << name << " and it has some talents:\n";
        for (int i = 0; i < talents.size(); i++) {
            std::cout << "It can \"";
            talents[i]->showTalent();
            std::cout << "\"\n";
        }
    }
};