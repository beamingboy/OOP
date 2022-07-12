#include<iostream>

extern void cpyia(int old_array[],int new_array[],int length);
int main() {

       int length = 8;
           int old_array[8]={1,2,3,4,5,6,7,8};

           int new_array[8];

              cpyia(old_array,new_array, length);


}