#include "HeadQuarter.h"

bool HeadQuarter::createWarrior(const unsigned int & time_stamp){
    if (name2cost_.size() == 0) return false;
    int original_idx = create_idx_;
    while (name2cost_[c_orders_[create_idx_]] > life_points_) {
        create_idx_++;
        create_idx_ = create_idx_ % c_orders_.size();
        if (create_idx_ == original_idx) {
            printf("%03d %s headquarter stops making warriors\n", time_stamp, hq_name_.c_str());
            return false;
        }
    }
    const string & w_name = c_orders_[create_idx_];
    int life_val = name2cost_[w_name];
    w_list_.emplace_back(Warrior(w_name, w_nextid_,life_val));
    life_points_ -= life_val;
    Warrior & w = w_list_[w_list_.size()-1];
    w_nextid_++;
    create_idx_++;
    name2cnt_[w.w_name_]++;
    //blue lion 5 born with strength 5,2 lion in red headquarter
    printf("%03d %s %s %d born with strength %d, %d %s in %s headquarter\n", 
            time_stamp, hq_name_.c_str(), w.w_name_.c_str(), w.id_,
            w.life_val_, name2cnt_[w.w_name_], w.w_name_.c_str(), hq_name_.c_str());
    return true;
}