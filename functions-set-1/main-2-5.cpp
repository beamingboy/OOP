#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool descending(int array[], int n);

int main() {
    int array[5] = {5,6,9,10,11};
    std::cout <<descending(array,5) << std::endl;

}