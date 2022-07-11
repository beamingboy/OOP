#include <iostream>
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_scaled_matrix(int array[3][3],int scale);

int main() {
    int scale = 0;
    int array[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    print_scaled_matrix(array,scale);
    return 0;
}