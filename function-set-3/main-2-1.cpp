#include <iostream>
using namespace std;

void cpyia(int old_array[],int new_array[],int length){

int *a = old_array;

int *b = new_array;



    for(int i=0 ; i<length ; i++){
        *(b+i) = *(a+i);
       }

                  for(int i=0; i<8; ++i){
     cout << b[i]<<" " ;


                  }cout<<endl;

}
