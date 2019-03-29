#ifndef HEADQUARTER_H
#define HEADQUARTER_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "Warrior.h"

using namespace std;

class HeadQuarter {
    public:
        unordered_map<string, int> name2cost_;
        vector<string> c_orders_;
        int life_points_;
        int create_idx_;
        vector<Warrior> w_list_;
        int w_nextid_;
        unordered_map<string, int> name2cnt_;
        const string hq_name_;

        HeadQuarter(int life_points, unordered_map<string, int> name2cost, vector<string> c_orders, const string & hq_name):
        name2cost_(name2cost.begin(), name2cost.end()),
        c_orders_(c_orders.begin(), c_orders.end()),
        life_points_(life_points),
        create_idx_(0),
        w_nextid_(1),
        hq_name_(hq_name)
        {
            cout << "Life Points: " << this->life_points_ << endl;
            cout << "Head Quarter: " << hq_name_ << " Constructor called" << endl;
            for (auto it = name2cost_.begin(); it != name2cost_.end(); it++) {
                name2cnt_[it->first] = 0;
            }
        }
    bool createWarrior(const unsigned int & time_stamp);
};
#endif
