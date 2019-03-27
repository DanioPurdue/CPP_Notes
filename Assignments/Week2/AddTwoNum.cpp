#include <iostream>
using namespace std;
//g++ -Wall -W -Werror AddTwoNum.cpp -o AddTwoNum

int addTwoNum(int a, int b) {
    return a+b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << addTwoNum(a, b)<<endl;
}