#include <iostream>
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_min_and_max(int integers[], int length);
extern  int max_integer(int integers[], int length);
extern  int min_integer(int integers[], int length);

int main() {
    int length = 4;
    int integers[4] = {4,6,7,8} ;
 std::cout<<"sum = "<<sum_min_and_max(integers,length)<<std::endl;
    return 0;
}