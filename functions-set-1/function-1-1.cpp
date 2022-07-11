#include <iostream>
//function to calculate the sum of an array

int sum_array(int array[], int n)
{
    if (n<1){

        return 0 ;
    }
    else if (n>1)
    {
         int sum =0;   // initialization

          for (int i = 0; i<n;i++)  //For loop to sum the array
           {
             sum = sum + array[i];

           }
           return sum ;

    }

}


