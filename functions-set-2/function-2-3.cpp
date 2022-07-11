#include <iostream>
//function to calculate the average of an array

 bool is_a_palindrome(int integers[], int length)
{
if (length<=0){
    return -1;
}else{
        int ref =0;

          for (int i = 1; i<length;i++)  //For loopto sum the array
           {
             if (integers[i]==integers[(length-1-i)])
             {
                 ref++;
             }

           }
           if (ref ==length){
               return 1;
           } else{
               return -2;
           }
}
}

int sum_if_a_palindrome(int integers[], int length)
{
    if (length<=0){
    return -1;
    }else{
    int ref =  is_a_palindrome(integers,length);
    if (ref==1){
        int sum =0;
        for (int i =0;i<length;i++){
          sum = sum + integers[i];

        }
        return sum ;
    }
    }
}
    
    int sum_elements(int integers[], int length)
{
    if (length<=0){
    return -1;
    }else{
        int sum2 =0;
        for (int i =0;i<length;i++){
          sum2 = sum2 + integers[i];

        }
        return sum2 ;
    }
    
}








