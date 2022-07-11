#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sumtwo(int array[], int secondarray[], int n);

int main() {
     int secondarray[5]={7,5,8,4,6};
     int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << sumtwo(array,secondarray,5) << std::endl;
    return 0;
}