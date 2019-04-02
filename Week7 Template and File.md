Stream

ifstream: read data

ofstream: write data

fstream: it is like iostream

```c++
ofstream fout;
if (!fout) {
    cerr << "File open error!"<<endl;
};
```

read pointer

write pointer

read write pointer

```c++
ofstream fout("a1.out", ios::app);
long location = fout.tellp(); //pointer location;
```

## File Pointer

```c++
ofstream fout("a1.out", ios::app);
fout.seekg(location, ios::beg);
fout.seekg(location, ios::cur);
fout.seekg(location, ios::end); //you can use relative pointer location
```

```c++
seekp;
```

seekp是写指针的位置。

location can also be negative value.

## Read or Write method

```c++
int x = 10;
fout.seekp(20, ios::beg);
fout.write((const char * )(&x), sizeof(int));

fin.seekg(0, ios::beg);
fin.read((char *)(&x), sizeof(int));
```

### Write Binary File

```c++
int main() {
    CStudent s;
    ofstream OutFile("c/tmp/students.dat", ios::out|ios::binary);
    while (cin >> s.szName >> s.nScore) {
        if (stricmp(s.szName, "exit") == 0)
            break;
        outFile.write((char *) & s, sizeof(s));
    }
    OutFile.close();
    return 0;
}
```

### Read Binary File

```c++
int main() {
    CStudent s;
    ifstream inFile("student.dat", ios::in | ios::binary);
    if (!inFile) {
        cout << "error" << endl;
        return 0;
    }
    while (inFile.read(char*) & s, sizeof(s)) {
        int nReadedBytes = inFile.gcount(); //check how many bytes you have read
        cout << s.szName << "" << s.score << endl;
    }
    inFile.close();
    return 0;
}
```

二进制文件读写

```c++
#include <iostream>
#include <fstream>
using namespace std;
class CStudent {
    public:
    	char szName[20];
    	int nScore;
}；
```

```c++
int main() {
    CStudent s;
    fstream iofile("c/tmp/students.dat", ios::in|ios::out|ios::binary);
    if (!iofile) {
        cout << "error";
        return 0;
    }
    iofile.seekp(2*sizeof(s), ios::beg); //locate to the thrid  record
    iofile.write("Mike", strlen("Mike")+1);
    iofile.seekg(0, ios::beg);
    while (iofile.read((char *) & s, sizeof(s)))
        cout<<s.szName<<" " <<s.nScore << endl;
    iofile.close();
    return 0;
}
```

