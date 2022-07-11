#include <iostream>  //including the input and output lib

//funcion to calculate the sum of the diagonal elements

int diagonal(int array[4][4]){

    int sum =0;
    for (int i = 0; i<4; i++)
    {
        for (int j =0; j<4;j++)

        {
            if (i==j)
            {
                sum = sum + array[i][j] ;

            }

        }


    }

    return sum;              // to get the value outside the function

}