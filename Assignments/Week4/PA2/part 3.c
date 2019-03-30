#include <iostream>
#include <cstring>
#include <assert.h>
using namespace std;
// 在此处补充你的代码
class Array2{

    class ArrayInter {
        int * _arr_ptr;
        const unsigned int _width;
        
        public:
        ArrayInter(int * arr_ptr, const unsigned int & width) :  _arr_ptr(arr_ptr), _width(width) {}
        int & operator[](const unsigned int idx) {
            assert(_arr_ptr != nullptr);
            assert(idx < _width);
            return *(_arr_ptr + idx);
        }
        ~ArrayInter(){}
    };

    public:
    int _row; //these two cannot be const, otherwise the copy constructor would not work.
    int _col;
    int * _arr_ptr;
    Array2(const int row, const int col=1):_row(row), _col(col) {
        _arr_ptr = new int[_row * _col];
    }

    Array2():_row(0), _col(0) {
        _arr_ptr = nullptr;
    }

    ArrayInter operator[](const unsigned int & i) {
        // index out of bound case
        assert(_arr_ptr != nullptr);
        assert(i < _row); //check whether you have one row or two rows
        int * ptr = _arr_ptr + i * _col;
        return ArrayInter(ptr, _col);
    }

    Array2& operator=(const Array2 & arr2) {
        _row = arr2._row;
        _col = arr2._col;
        if (_arr_ptr != nullptr)delete [] _arr_ptr;
        _arr_ptr = new int[_row * _col];
        memcpy(_arr_ptr, arr2._arr_ptr, _row * _col * sizeof(int));
        return *this;
    }

    int operator() (const unsigned int row_idx, const unsigned int col_idx) {
        assert(_arr_ptr != nullptr);
        assert(row_idx < _row);
        assert(col_idx < _col);
        return *(_arr_ptr + (row_idx * _col + col_idx));
    }


    ~Array2(){
        if (_arr_ptr) delete [] _arr_ptr;
    }


};

int main() {
    Array2 a(3,4);
    int i,j;
    for(  i = 0;i < 3; ++i )
        for(  j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;     b = a;
    for(  i = 0;i < 3; ++i ) {
        for(  j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}