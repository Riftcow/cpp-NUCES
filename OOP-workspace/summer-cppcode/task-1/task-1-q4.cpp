#include <iostream>
int main()
{
    int x=10,
        y=15,
        z=20,
        condition;
        if(!(x>10))
        {
            condition=!(x>10);
            std :: cout<<" "<< condition;
        }
        if(x<=5 || y<15)
        {
            condition=(x<=5 || y<15);
            std :: cout<<" "<< condition;
        }
        if((x!=5) && (y!=z) )
        {
            condition=(x!=5)&&(y!=z);
            std :: cout<<" "<< condition;
        }
        if((x>=z) || (x+y>=z) )
        {
            condition=(x>=z) || (x+y>=z) ;
            std :: cout<<" "<< condition;
        }
        if((x<=y-2) && (y>=z) || (z-2 !=20) )
        {
            condition=(x<=y-2) && (y>=z) || (z-2 !=20) ;
            std :: cout<<" "<<condition;
        }

        
    return 0;
}
