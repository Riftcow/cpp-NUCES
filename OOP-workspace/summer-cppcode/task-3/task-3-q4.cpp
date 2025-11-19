#include <iostream>

int main()
{
    int *arr,
        *ptr_max;
    int size=0;
    std :: cout<<"Enter the size of your Database : ";
    std :: cin>>size;
    arr= new int(size);
    std :: cout<<"\n\nAdd values in Dataset.\n";
        while (int i=0 <size) 
        {
            std :: cin>>arr[i];
            i=i+1;
        }

        // now logic 
        int Max=0;
        ptr_max=&Max;
        for(int i=0 ;i<size ;i++)
        {
            if(arr[i]>*ptr_max)
            {
                *ptr_max=arr[i];
            }
        }

        std :: cout<<"Address "<< ptr_max<<" : "<<*ptr_max;
    delete []arr;
        
    return 0;
}
