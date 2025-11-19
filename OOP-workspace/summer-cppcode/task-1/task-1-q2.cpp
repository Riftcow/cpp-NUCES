#include <iostream>

int main()
{
    int multiple,x=1;
    std :: cout<<"Enter the number to find the multiple "<<std :: endl;
    std :: cin>>multiple;
    std :: cout<< std :: endl;
        //table by 10 rows and 10 column
        for (int i=1 ;i<=10; i++)
        {
            for( int j=1 ;j<=10 ;j++)
            {
                std :: cout<<" "<<multiple*x;
                x++;
            }
            std ::cout<<std :: endl;
        }
    return 0;
}
