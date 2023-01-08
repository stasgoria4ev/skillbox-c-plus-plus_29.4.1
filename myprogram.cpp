#include "Talent.h"
#include "Swimming.h"
#include "Dancing.h"
#include "Counting.h"
#include "Dog.h"
#include <iostream>
#include <string>

int main() { 
    Dog dog1("Steve");
    
    Talent* dance = new Dancing;
    Talent* swim = new Swimming;
    Talent* count = new Counting;

    dog1.show_talents();
}