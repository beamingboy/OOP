#include <iostream>
//function to calculate the average of an array

int min_integer(int integers[], int length)
{
    if (length<=0){

        return -1 ;
    }
    else if (length>=1)
    {
         int min = integers[0];   // initialization

          for (int i = 1; i<length;i++)  //For loopto sum the array
           {
             if (min > integers[i])
             {
                 min = integers[i];
             }
             else if (min < integers[i])
             {
                 min = min;
             }

           }


           return min ;

    }

}

int max_integer(int integers[], int length)
{
    if (length<=0){

        return -1 ;
    }
    else if (length>=1)
    {
         int max = integers[0];   // initialization

          for (int i = 1; i<length;i++)  //For loopto sum the array
           {
             if (max < integers[i])
             {
                 max = integers[i];
             }
             else if (max > integers[i])
             {
                 max = max;
             }

           }


           return max ;

    }

}

int sum_min_and_max(int integers[], int length){
    int min =min_integer(integers, length);
    int max =max_integer(integers, length);
    int sum = 0;

    sum = min + max;

    return sum;
}





