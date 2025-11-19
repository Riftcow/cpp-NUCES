#include <iostream>
struct Points
{
    //  coordinate definition
    int pt_x,
        pt_y,
        pt_sum;

};
int main()
{
    Points p1,
           p2;
    std:: cout<<"Enter coordinates to Point1(x,y) : ";
    std:: cin>>p1.pt_x>>p1.pt_y;
    std :: cout<<"\nEnter coordinates to Point2(x,y) : ";
    std :: cin>>p2.pt_x>>p2.pt_y;
    
        //  Logic
    p1.pt_sum=p1.pt_x+p2.pt_x;
    p2.pt_sum=p1.pt_y+p2.pt_y;

    std:: cout<<"\n\tCoordinates for P1 + P2  = "<<p1.pt_sum<<" , "<<p2.pt_sum;
    return 0;
}
