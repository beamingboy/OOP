#include <iostream>
//function to count the maching paramenters of an array

int count(int array[], int n, int number)
{
    if (n<1){

        return 0 ;
    }
    else if (n>1)
    {
         int numOfElements = 0;  // initialization

          for (int i = 0; i<n;i++)  //For loop to sum the array
           {
               if(number == array[i])
               {
             numOfElements++;
               }
              
           }

           return numOfElements ;

    }

}


