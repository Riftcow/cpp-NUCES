#include <iostream>

int Max_arr(int arr[10])
{
    int t_max=0;
    for(size_t i=0; i<10 ;i++)
    {
        if(arr[i]>t_max)
        {
            t_max=arr[i];
        }
    }
    return t_max;
}

int main()
{
    int array[10];
    std ::cout<<"Enter value 10 values \n";
    for (size_t i=0 ;i<10 ;i++)
    {
        std :: cin>> array[i];
    }
    std :: cout<<"\n";

    std :: cout<<"Max value in array is : "<< Max_arr(array)<<"\n\n";

    for(size_t i=0 ;i<10 ;i++)
    {
        std ::cout<<" "<<array[i]<<" ";
    }
    
    return 0;
}
