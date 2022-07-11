#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int diagonal(int array[4][4]);

int main() {
    int array[4][4] = {{1,-2,0,6},{0,7,3,2},{-9,-2,12,3},{4,5,6,7}};
    std::cout << "The sum is: " << diagonal(array) << std::endl;
    return 0;
}