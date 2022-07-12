#include <iostream>  //including the input and output lib

using namespace std ;

void copy_2d_strings(string first[][2], string second[][2], int n)
{
    for (int i =0; i<n ; i++)
    {
        for ( int j =0; j <2 ; j++)s
        {
            second[i][j]= first[i][j];

            if( j== 1)
            {
                cout<<second[i][j];
            }
            else
            {
                cout<<second[i][j]<<" ";
            }

        }

        cout<<endl;
    }




}