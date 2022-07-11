#include <iostream>
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_numbers(int array[4][4]);

int main() {int array[4][4] = {{1,-2,0,6},{0,7,3,2},{-9,-2,12,3},{4,5,6,7}};
    count_numbers(array);
    return 0;
}