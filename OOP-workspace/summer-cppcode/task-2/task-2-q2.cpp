#include <iostream>
        //  pass by value
int Pass_val(int a)
{
    return  a=(a*a*a);
}
    //  pass by reference
int Pass_ref(int &b)
{
    return b=(b*b*b);
}
int main()
{
    int a,
        b;
    std ::cout<<"Enter first value ";
    std :: cin>>a;
    std :: cout<<"\n Enter second value ";
    std :: cin>>b;
    std :: cout<<"\n";
        
    std :: cout<<"\n\n Result Pass by val "<<Pass_val(a);
    std :: cout<<"\n Result pass by ref  "<<Pass_ref(b);

        std :: cout<<"\n now;\n\t"<<"num1  : "<<a<<"\n\tnum2 : "<<b;
    return 0;
}
