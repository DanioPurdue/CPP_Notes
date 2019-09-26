# Polymorphism and Virtual Function

```c++
class Base {
    virtual int get();
}
```

constructor and static function cannot be virtual

virtual function can be part of polymorphsim,

```c++
p->SomeVirtualFunction();
//it is same for the reference
r->SomeVirtualFunction(); //it has to be virtual function
```

在非构造和析构函数中调用虚构函数就是多太，不然就不是多太函数.

However, the function call inside the constructor is would not be involved in the polymorphism.

## Trade off of virtual functions

every object that has virtual functions need extra four bytes to store the address of the vritual address table.

your destructor also need to be virtual to make the program work.

you also need to perform the look up to find the definition for that virtual function.

## Destructor

It is often a good practice that you set your destructor to be a virtual function as well, because if you don't set it as a virtual function, only the base class's destructor would be called, and its derived class's destructor would not be called.

## Pure virtual function

you cannot have an object out of the abstract class. You can have pointer and reference for that.

```c++
virtual void Print()=0; // pure virtual function
```

## Abstract class

member function can call pure virtual function.

contructor and destruction cannot call pure virtual function

