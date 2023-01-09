#include "Talent.h"
#include "Swimming.h"
#include "Dancing.h"
#include "Counting.h"
#include "Dog.h"

int main() { 
    Dog dog1("Steve");
    
    Talent* dance = new Dancing;
    dog1.addTalents(dance);
    
    Talent* swim = new Swimming;
    dog1.addTalents(swim);
    
    Talent* count = new Counting;
    dog1.addTalents(count);

    dog1.show_talents();
}