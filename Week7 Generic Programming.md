## Generic Programming

function template

class template

function template

```c++
void Swap(int & x, int & y) {
 	double tmp = x;
    x = y;
    y = temp;
}

void Swap (double & x, double & y) {
    double tmp = x;
    x = y;
    y = temp;
}

template <class T>
void Swap(T & x, T & y) {
	T tmp = x;
    x = y;
    y = tmp;
}

//有了t1和t2这样就能够避免二译性
template <class T1, class T2>
T2 print(T1 arg1, T2 arg2) {
	cout << arg1 << " " << arg2 << endl;
	return arg2;
}
```

class template

```c++
template <class T1, class T2>
class Pair {
    public:
    	T1 key;
    	T2 value;
    	Pair(T1 k, T2 v):key(k), value(v) {};
    	bool operator < (const Pair<T1, T2> & p) const;
}
bool Pair<T1, T2>::operator<(const Pair<T1, T2> &p) const {
	return key < p.key;
}
```

```c++
#include<iostream>
using namespace std;
template<class T>
class A{
    public:
    template<class T2>
    void Func(T2 t){cout<<t;} //成员函数模版
}
```

你可以非类型参数来交集

```c++
template<class T, int elementsNumber> //非类型参数 这个用来标记固定的属性。
```

```
CArray<double, 40>
```

