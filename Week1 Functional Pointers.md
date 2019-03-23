```c++
returntype (*func_ptr_name)(param_type);
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

