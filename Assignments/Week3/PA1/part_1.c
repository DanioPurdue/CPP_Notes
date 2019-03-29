#include <iostream>
using namespace std;
class A {
public:
    int val;
// 在此处补充你的代码
    A (){
        val = 0;
        cout << "Empty Constructor"<<endl;
    }
    A (int m_val): val(m_val) {
        cout << "val: " << val << endl; 
        cout <<"Type conversion constructor"<<endl;
    }
    A& GetObj() {
        return *this;
    }
    A(A& a) {
        cout << "Copy constructor" << endl;
        this->val = a.val;
    }
    ~A() {
        cout << "val: " << val << " Destructor Called" << endl;
    }
};
int main()  {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
}