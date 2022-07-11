#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int array[], int n, int number);

int main() {
    int array[8] = {0,5,6,0,1,4,6,9};
    std::cout << "The number is: " << count(array, 8,0) << std::endl;
    return 0;
}