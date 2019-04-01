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
        string _special_message;
    
    Warrior(const string w_name, const int id, const int life_val, const int atk_val=10):
    w_name_(w_name), 
    id_(id), 
    life_val_(life_val), 
    atk_val_(atk_val),
    _special_message("") {}
    const string & specialMessage();
};

class Dragon : public Warrior{
    public:
    float _morale;
    string _weapon1;
    string weapons [3] = {"sword", "bomb", "arrow"};
    Dragon(const int id, const int life_val, const int remained_life_pt, const int atk_val=10) : Warrior("dragon", id, life_val, atk_val),
    _morale((float)remained_life_pt / life_val) {
        _weapon1 = weapons[id_%3];
        char temp_c_str [80];
        sprintf(temp_c_str, "It has a %s, and it's morale is %.2f", _weapon1.c_str(), _morale);
        _special_message = temp_c_str;
    }

};

class Ninja : public Warrior{
    public:
    float _morale;
    string _weapon1;
    string _weapon2;
    string weapons [3] = {"sword", "bomb", "arrow"};
    Ninja(const int id, const int life_val, const int atk_val=10) : Warrior("ninja", id, life_val, atk_val) {
        _weapon1 = weapons[id_%3];
        _weapon2 = weapons[(id_+1)%3];
        char temp_c_str [80];
        sprintf(temp_c_str, "It has a %s and a %s", _weapon1.c_str(), _weapon2.c_str());
        _special_message = temp_c_str;
    }

};

class Lion : public Warrior{
    public:
    float _morale;
    unsigned int _loyalty;
    string weapons [3] = {"sword", "bomb", "arrow"};
    Lion(const int id, const int life_val, const int remained_life_pt, const int atk_val=10) : Warrior("lion", id, life_val, atk_val) {
        _loyalty = remained_life_pt;
        char temp_c_str [80];
        sprintf(temp_c_str, "It's loyalty is %d", _loyalty);
        _special_message = temp_c_str;
    }

};

class Iceman : public Warrior{
    public:
    string weapons [3] = {"sword", "bomb", "arrow"};
    float _morale;
    const string _weapon1;
    Iceman(const int id, const int life_val, const int atk_val=10) : Warrior("iceman", id, life_val, atk_val),
    _weapon1(weapons[id_%3]) {
        char temp_c_str [80];
        sprintf(temp_c_str, "It has a %s", _weapon1.c_str());
        _special_message = temp_c_str;
    }

};


#endif
