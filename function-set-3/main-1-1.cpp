#include <iostream>

using namespace std;

extern void copy_2d_strings(string first[][2], string second[][2], int n);

int main() {
    int n = 3;
    string second[3][2];
    string first[3][2] =
    {
        {"a","b"},
        {"c","d"},
        {"e","f"}
    };

    copy_2d_strings(first,second,n) ;
    return 0;
}