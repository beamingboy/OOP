#include <iostream>
//function to calculate the average of an array

double average(int array[], int n)
{
    if (n<1){

        return 0 ;
    }
    else if (n>1)
    {
         double sum =0;   // initialization

          for (int i = 0; i<n;i++)  //For loopto sum the array
           {
             sum = sum + array[i];

           }

           double averageOfArray = 0;

           averageOfArray = sum /n ;
           return averageOfArray ;

    }
    
}




