#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
#include "HeadQuarter.h"


/*
第二行：五个整数，依次是 
dragon 、ninja、iceman、lion、wolf
3, 4, 5, 6, 6
*/
int main() {
    unordered_map<string, int> n2v;
    n2v["dragon"] = 3;
    n2v["ninja"] = 4;
    n2v["iceman"] = 5;
    n2v["lion"] = 6;
    n2v["wolf"] = 7;
    int life_pts = 20;
    vector<string> c_orders_red {"iceman", "lion", "wolf", "ninja", "dragon"};
    vector<string> c_orders_blue {"lion", "dragon", "ninja", "iceman", "wolf"};
    HeadQuarter red_hq(life_pts, n2v, c_orders_red, "red");
    HeadQuarter blue_hq(life_pts, n2v, c_orders_blue, "blue");
    bool is_prep_red = true;
    bool is_prep_blue = true;
    unsigned int time_stamp = 0;
    while (is_prep_red || is_prep_blue) {
        if (is_prep_red) is_prep_red = red_hq.createWarrior(time_stamp);
        if (is_prep_blue) is_prep_blue = blue_hq.createWarrior(time_stamp);
        time_stamp++;
    }
}