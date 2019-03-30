#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
// 在此处补充你的代码
    Complex & operator=(const string & input_str) {
        size_t plus_idx = input_str.find("+");
        if (plus_idx == string::npos) return *this;
        r = stod(input_str.substr(0, plus_idx));
        i = stod(input_str.substr(plus_idx+1, input_str.length()-1));
        cout << "real: " << r << " imaginary: " << i << endl;
        return *this;
    }
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}