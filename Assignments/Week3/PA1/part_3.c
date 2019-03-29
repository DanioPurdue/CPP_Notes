#include <iostream>
using namespace std;
class Base {
public:
    int k;
    Base(int n):k(n) { 
        cout<<"Base copy constructor"<<endl;
    }
};
class Big  {
public:
    int v; Base b;
// 在此处补充你的代码
    Big(int num):v(num), b(Base(num)){
        cout<<"Constructor 1:" << endl;
    }
    Big(Big& big):v(big.v),b(big.b){
        cout<<"Big copy constructor called"<<endl;
    }
};
int main()  {
    Big a1(5);    Big a2 = a1;
    cout << a1.v << "," << a1.b.k << endl;
    cout << a2.v << "," << a2.b.k << endl;

    cout << "test on the copy constructor" << endl;
    Big a3(10);
    a3 = a1;
    return 0;
}