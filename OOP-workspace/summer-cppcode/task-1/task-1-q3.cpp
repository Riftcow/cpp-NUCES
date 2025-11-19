#include <iostream>
int main()
{
    int num,
        reverse=0,
        last_digit,
        i=0;
    std :: cout<<"Enter Five Digit number "<<std :: endl;
    std :: cin>>num;
    std ::cout << std :: endl;
        
        while (i<=4) 
        {
            last_digit=num%10;
            reverse=(reverse*10)+last_digit;
            num=num/10;
            i++;
            if(i==3)
            {
                std :: cout<<"  "<<reverse;
                break;
            }
        }
    return 0;
}
