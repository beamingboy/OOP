#include <iostream>  //including the input and output lib

//funcion to calculate the sum of the diagonal elements

void count_numbers(int array[4][4]){


    int one =0,zero = 0,two = 0,three = 0,four = 0,five = 0,six = 0,seven = 0,eight = 0,nine = 0;
    for (int i = 0; i<4; i++)
    {
        for (int j =0; j<4;j++)

        {
            if (array[i][j] == 1)
            {
                one++;

            }
            else if (array[i][j]==0)
            {
                zero++;
            }
            else if (array[i][j]==2)
            {
                two++;
            }
            else if (array[i][j]==3)
            {
                three++;
            }
            else if (array[i][j]==4)
            {
                four++;
            }
            else if (array[i][j]==5)
            {
                five++;
            }
            else if (array[i][j]==6)
            {
                five++;
            }
            else if (array[i][j]==6)
            {
                six++;
            }
            else if (array[i][j]==7)
            {
                seven++;
            }
            else if (array[i][j]==8)
            {
                eight++;
            }
            else if (array[i][j]==9)
            {
                nine++;
            }

        }


    }

    std::cout << "0:" << zero << ";1:" << one << ";2:" << two << ";3:" << three << ";4:" << four << ";5:" << five << ";6:" << six << ";7:" << seven << ";8:" << eight << ";9:" << nine << ";"<<std::endl;

}