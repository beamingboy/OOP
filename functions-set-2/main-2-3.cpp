#include <iostream>
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int is_a_palindrome(int integers[], int length);
extern  int sum_if_a_palindrome(int integers[], int length);
extern  int sum_elements(int integers[], int length);

int main() {
    int length = 4;
    int integers[4] = {1,9,9,1} ;
 std::cout<<"sum = "<<sum_if_a_palindrome(integers,length)<<std::endl;
    return 0;
}