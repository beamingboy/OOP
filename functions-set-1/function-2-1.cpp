#include <iostream>
//function to calculate the average of an array

int minimum(int array[], int n)
{
    if (n<1){

        return 0 ;
    }
    else if (n>1)
    {
         int min = array[0];   // initialization

          for (int i = 1; i<n;i++)  //For loopto sum the array
           {
             if (min > array[i])
             {
                 min = array[i];
             }
             else if (min < array[i])
             {
                 min = min;
             }

           }

         
           return min ;

    }
    
}




