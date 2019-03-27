#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
输入
姓名，年龄，学号，第一学年平均成绩，第二学年平均成绩，第三学年平均成绩，第四学年平均成绩。
其中姓名、学号为字符串，不含空格和逗号；年龄为正整数；成绩为非负整数。
各部分内容之间均用单个英文逗号","隔开，无多余空格。

输出
一行，按顺序输出：姓名，年龄，学号，四年平均成绩（向下取整）。
各部分内容之间均用单个英文逗号","隔开，无多余空格。

*/

//clang++ -Wall -Werror -std=c++11 -stdlib=libc++ ComputeAverageScore.cpp -o ComputeAverageScore
unsigned long computeAverage(const unsigned long total, size_t len) {
    return (total == 0) ? 0 : total/len;
}

int main() {
    string name;
    // unsigned int grades [4];
    string raw_input;
    cin >> raw_input;

    const string delim = ",";
    size_t end = 0;
    size_t start = 0;
    vector<string> splited_vec;
    while ((start = raw_input.find_first_not_of(delim, end)) != string::npos) {
        end = raw_input.find(delim, start); // end should find the dot
        splited_vec.emplace_back(raw_input.substr(start, end-start));
    }
    unsigned long total = 0;
    unsigned long avg_score  = 0;
    for (int i = 0; i < 4; i++) {
        total += stoul(splited_vec[splited_vec.size()-i-1]);
    }
    avg_score = computeAverage(total, 4);
    //name, age, student id, avg
    for (int i = 0; i < 3; i++) {
        cout << splited_vec[i] << ",";
    }
    cout << avg_score << endl;
}