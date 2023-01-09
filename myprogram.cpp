#include "Talent.h"
#include "Swimming.h"
#include "Dancing.h"
#include "Counting.h"
#include "Dog.h"

int main() { 
    Dog dog1("Steve");
    
    dog1.talents.push_back(new Dancing);
    dog1.talents.push_back(new Swimming);
    dog1.talents.push_back(new Counting);

    dog1.show_talents();
}