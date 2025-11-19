#include <iostream>
int main()
{
    int a,
        b;
    int *ptr_a,
        *ptr_b;
    std:: cout<<"Enter value to A and B : \n";
    std:: cin>> a>>b;
    
    ptr_a=&a,
    ptr_b=&b;

    std:: cout<<"\nAddress ptr_a = "<<ptr_a<<" : "<<*ptr_a <<" Address ptr_b = "<<ptr_b<<" : "<<*ptr_b;
    return 0;
}
