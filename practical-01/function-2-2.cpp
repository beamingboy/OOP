#include <iostream>
//function to calculate the average of an array

int maximum(int array[], int n)
{
    if (n<1){

        return 0 ;
    }
    else if (n>1)
    {
         int max = array[0];   // initialization

          for (int i = 1; i<n;i++)  //For loopto sum the array
           {
             if (max < array[i])
             {
                 max = array[i];
             }
             else if (max > array[i])
             {
                 max = max;
             }

           }


           return max ;

    }

}




