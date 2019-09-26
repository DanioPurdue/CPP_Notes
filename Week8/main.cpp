#include <iostream>
#include <iterator>
#include <set>
#include <vector>
using namespace std;

struct ObjectA {
public:
    int a;
    int b;
    ObjectA(int a, int b) : a(a), b(b) {
        cerr << "Object is called" << endl;
    }

    ObjectA(const ObjectA & input) {
        cerr << "this is a copy constructor" << endl;
        this->a = input.a;
        this->b = input.b;
    }

    ObjectA(ObjectA && input) noexcept { //this right value
        cerr << "this is a move constructor" << endl;
        this->a = input.a;
        this->b = input.b;
    }

    void printItself() {
        cout<< "a : " << this->a << " b: " << this->b << endl;
    }


    bool operator < ( const ObjectA & ob) const { //this doesn't change
        return this->a < (ob.a);
    }
};

int main() {
    int a[] = {8,7,8,9,6,2,1};
// 在此处补充你的代码
    set<int> v(a, a + sizeof(a) / sizeof(int));
    ostream_iterator<int> o(cout," ");
    copy( v.begin(),v.end(),o);


    cout << "before empblace back" << endl;

    vector<ObjectA> objList;
    objList.reserve(3);
    objList.emplace_back(ObjectA(1, 3));
    objList.emplace_back(ObjectA(2, 2));
    objList.emplace_back(ObjectA(3, 1));

//    cout << "after empblace back" << endl;
//    set<ObjectA> objectSet(objList.begin(), objList.end());
//    for (auto iter : objectSet) {
//        cout << iter.a << ", " << iter.b << endl;
//    }
    return 0;
}