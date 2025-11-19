#include <iostream>
int main()
{
    float number1,number2,result;
    char choice,operatorr;
    do 
    {
            //Input value data 
            std :: cout<<"Enter first number : ";
            std ::cin>>number1;
            std :: cout<<"\nEnter operato number : ";     
            std ::cin>>operatorr;
            std :: cout<<"\nEnter first number : ";    
            std ::cin>>number2;
            std :: cout<< std ::endl;
            
                    // logic
            switch (operatorr) 
        {
            case '+':
                {
                    result=number1+number2;

        std :: cout<<"result of number1 "<<operatorr<<" number2 = "<<result <<std :: endl;
                    break;
                }
            case '-':
                {
                    result=number1-number2;
                    
        std :: cout<<"result of number1 "<<operatorr<<" number2 = "<<result <<std :: endl;
                    break;

                }
            case '*':
                {
                    result=number1*number2;

        std :: cout<<"result of number1 "<<operatorr<<" number2 = "<<result <<std :: endl;
                    break;
                  }
                   
            case '/':
                {
                    result=number1/number2;
                    
        std :: cout<<"result of number1 "<<operatorr<<" number2 = "<<result <<std :: endl;
                    break;
                }
            //  Default session
                default:
                {
                    std :: cout<<"Invalid operator "<<std :: endl;
                    break;
                }
        }
            //input again
        std :: cout<<"Enter again (Yes = 'y' Or No ='n' )";
        std :: cin>> choice;
   }
    while(choice=='y');

    return 0;
}
