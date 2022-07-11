#include <iostream>  //including the input and output lib
using namespace std;
//funcion to calculate the sum of the diagonal elements
void print_scaled_matrix(int array[3][3],int scale){


    for (int i = 0; i<3; i++)
    {
        for (int j =0; j<3;j++)

        {

                array[i][j]=array[i][j] * scale;





        }


    }
    for (int a = 0; a<3; a++)
    {
        for (int b =0; b<3;b++)

        {


                cout<< array[a][b]<< " ";




        }
        cout<<endl;
    }
}

