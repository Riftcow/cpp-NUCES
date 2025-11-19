#include <cstddef>
#include <iostream>
const int size=2;

int main()
{
    int A[size][size],
        B[size][size],
        C[size][size];

    std :: cout<<"Enter value to First Matrix A : \n";
    for(size_t i=0;i<size;i++)
    {
        for(size_t j=0;j<size ;j++)
        {
            std :: cin>> A[i][j];
        }
        std :: cout<<"\n";
    }

    
    std :: cout<<"Enter value to First Matrix B : \n";
    for(size_t i=0;i<size;i++)
    {
        for(size_t j=0;j<size ;j++)
        {
            std :: cin>> B[i][j];
        }
        std :: cout<<"\n";
    }
            //  Calculation of Matrix
    std :: cout<<"Matrix Calculations C : \n";
    for(size_t i=0;i<size;i++)
    {
        for(size_t j=0;j<size ;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        std :: cout<<"\n";
    }

    std :: cout<<"Result : \n";
    for(size_t i=0;i<size;i++)
    {
        for(size_t j=0;j<size ;j++)
        {
            std :: cout<<C[i][j]<<"  ";
        }
        std :: cout<<"\n";
    }


    
    return 0;
}
