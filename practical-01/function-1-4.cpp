#include <iostream>
//function to sum the two array

int sumtwo(int array[], int secondarray[], int n)
{
     if (n<1){

        return 0 ;
    }
    else if (n>1)
    {
         int sumArray = 0;  // initialization

          for (int i = 0; i<n;i++)  //For loop to sum the array
           {
               sumArray = sumArray + array[i];
           }

           int sumSecond = 0;  // initialization

          for (int i = 0; i<n;i++)  //For loop to sum the array
           {
               sumSecond = sumSecond+ secondarray[i];
           }

           int total = 0;

           total = sumArray+ sumSecond;

           return total;

    }
}