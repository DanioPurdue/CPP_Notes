# Week 4 Operator Overload

## 普通重载

```c++
class Complex {
    //普通函数的重载
    Complex operator+(const Complex &a, const Complex & b) {
        return Complex(a.real+b.real, a.imaginary+b.imaginary);
    }
    
    //成员函数的重载
    Complex operator+(const Complex &a);
}
```

Second method 函数重载的方法

```
a+b;
a.add(b);
Complex Complex::
```



## Assignment Operator Overload

int = double something like that,

this can only be overloaded as the member function overload

```c++
char * String::operator=(const char * s) {
    if (str) delete [] str;
    if (s) {
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
    else str = NULL;
    return str;
}
```

You need the return type for chaining.

## Deep Copy V.S. Shallow Copy

**operator overload, you should avoid self referencing issue.**

There are lots of cases for operator overload.

## Operator Overload on the friend function

```c++
c+5;
5+c; 
//the things above are the two cases.
//in order to access private member you need to access the private members
friend Complex operator+ (double r, const Complex & c)
```

```c++
int & CArray::operator[](int i) //返回值为int 不行，不支持a[i]=4,所以一定要返回reference才可以被修改
```



When you define a object, and you want to print the object using the stream operator, you have overload the operator function. It cannot be a member function, and it can only be a normal function.

```c++
ostream & operator<<(ostream & o, const CSStudent & s) {
    o << s.nAge;
    return 0;
}
```

## ++/--

`++a` is unary operator

`a++` is a binary operator

you can make them either friend function,

or you can make them a member function.



The following has to be the member function.

```
(), [], -> and []
```



## Project

make sure you don't do the shallow copy, because if you do shallow copy, the destructor would free it twice. You should only do deep copy for pointers 

```c++
 Array2 b;     b = a;
```

