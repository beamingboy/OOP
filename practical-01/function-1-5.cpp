#include <iostream>
//function to count the maching paramenters of an array

int count_even(int array[], int n)
{
    if (n<1){

        return 0 ;
    }
    else if (n>1)
    {
         int countEven= 0;  // initialization

          for (int i = 0; i<n;i++)  //For loopto sum the array
           {
               if(array[i]%2==0)
               {
             countEven++;
               }
           }

           return countEven ;

    }

}