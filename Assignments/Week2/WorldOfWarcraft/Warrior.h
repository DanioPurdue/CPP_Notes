#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>

using namespace std;
class Warrior{
    public:
        const string w_name_;
        const int id_;
        int life_val_;
        int atk_val_;
    
    Warrior(const string w_name, const int id, int life_val, int atk_val=10):
    w_name_(w_name), 
    id_(id), 
    life_val_(life_val), 
    atk_val_(atk_val) {}
};
#endif
