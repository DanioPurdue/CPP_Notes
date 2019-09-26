<img src="Week9 Algo/image-20190925222519513.png" alt="image-20190925222519513" style="zoom:30%;" />

<img src="Week9 Algo/image-20190925222750781.png" alt="image-20190925222750781" style="zoom:30%;" />

<img src="Week9 Algo/image-20190925222945585.png" alt="image-20190925222945585" style="zoom:15%;" />

```c++
for_each:
template<class Inlt, class Fun>
Fun for_each(Inlt first, Inlt last, Fun f);
```

## Copy

```c++
ostream_iterator<int> output(cout, " ");
copy(v.begin(), v.end(), output);
```

remove does not really remove. It replaces the open space, with the non elements behind it.

