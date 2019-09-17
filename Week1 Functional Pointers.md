```c++
return type (*func_ptr_name)(param_type);
int (*pf)(int, char);

pf = PrintMin;
pf(x, y);
```

Why do you need a function pointer

```c++
void qsort(void *base, int nelem, unsigned int width, int (* pfCompare)(const void*, const void* ))
```

base: starting position

nelem: number of element

width: number of bytes for the element

command line parameters

```c++
int main(int argc, char * argv[]) {
    ...
}
```

## Bit Manipulation

```
& and
| or
^ exclusive or
~ negation
>> left shift
<< right shift
```

```c++
n &= 0xffffff00; //把最低的8位变为0
```

## Reference & Aliasing

reference is constant one is done.

it cannot reference const or expression

```c++
int n = 4;
int & SetValue() {
    return n;
}

int main() {
    SetValue() = 40;
    count << n;
    return 0;
}
```

```c++
const int & r = n; //you cannot change the content
const T & and T & are different.
```

## Const Pointer

```c++
const int * p = & n; //you can let it to point something else, but you cannot change it
const_ptr = no_const_ptr; //this is ok
no_const_ptr = const_ptr; //this is not okay
/*If you really whant to do this you want to cast it*/
```

## Dynamic Memory Allocation

```c++
int * pn = new int; //it returns the starting address
P = new T[N];
delete [];
```



function calls usually takes time, If you use it many time, it is better to just use inline function.

内联函数 Inline function. Inline function would not make any external function call, it would inject function directly into the code.

```c++
inline int Max(int a , int b) {
    if (a > b) return a;
    return b;
}
```

However this would results in larger executable

## Function overload

```c++
int Max(double f1, double f2);
int Max(int n1, int n2);
int Max(int n1, int n2, int n3);

void func(int x1, int x2 = 2, int x3 = 3) {}
```

![image-20190325163951670](/Users/daniowang/OneDrive/GitHub/CPP_Notes/缺省.png)

This is easier for expanding the project.