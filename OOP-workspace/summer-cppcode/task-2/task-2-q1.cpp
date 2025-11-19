#include <iostream>
int Factorial(int x)
{
    int fact=1;
    for (int i=2; i<=x ;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num;
    std :: cout<<"Enter the number to find the Factorial "<<std :: endl;
    std :: cin>> num;
    std :: cout<< std :: endl<<"\t\t Factorial of "<<num <<" "<< Factorial(num);


    return 0;
}
