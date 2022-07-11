#include <iostream>  //including the input and output lib

//funcion to calculate the sum of the diagonal elements

int identity(int array[10][10]){

    int ref =0;
    int ref2 =0;
    for (int i = 0; i<10; i++)
    {
        for (int j =0; j<10;j++)

        {
            if (i==j)
            {
                ref= ref+array[i][j];

            }
            else
            {
                ref2 = ref2 + array[i][j];
            }

        }


    }

    if (ref==10 && ref2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}