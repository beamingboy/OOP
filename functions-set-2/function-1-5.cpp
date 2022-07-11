#include <iostream>  //including the input and output lib
using namespace std;
//funcion to calculate the sum of the diagonal elements
void print_summed_matrices(int array1[3][3],int array2[3][3]){


    for (int i = 0; i<3; i++)
    {
        for (int j =0; j<3;j++)

        {

                array1[i][j]=array1[i][j] +array2[i][j];





        }


    }
    for (int a = 0; a<3; a++)
    {
        for (int b =0; b<3;b++)

        {


                cout<< array1[a][b]<< " ";




        }
        cout<<endl;
    }
}

