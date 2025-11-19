#include <cstdlib>
#include <iostream>
#include <istream>
#include <string>

class Laptop
{
	std::string Brand,
				Model,
				Color;
	int Serial,
		Ram=8;
	float Price,
		  ProcessorSpeed,
		  ScreenSize;

	public :
					//	Spec Selector...
	void laptopSpec()
	{
			std :: cout<<"Enter Your Budget for Laptop : \n";
			std :: cin>> Price;
				
				std :: cin.ignore();
		std :: cout<<"Select Brand : \n";
		std :: getline(std :: cin >> std :: ws, Brand);
		std :: cout<<"Select Model : \n";
		std :: getline(std :: cin >> std :: ws,Model);
		std :: cout<<"Select Serial Number Range from 9th Gen -- \n";
		std :: cin>> Serial;
		std :: cout<<"Select ScreenSize : Range from 13, 14, 15 inches \n";
		std :: cin>> ScreenSize;
		std :: cout<<"Select Color From Black,  Silver,  SkyBlue,  \n";
			
			std :: cin.ignore();
		std :: getline( std :: cin >> std :: ws, Color );
		std :: cout<<"Select ProcessorSpeed :   From the List  1.8,  1.92,  2.4,  2.6 \n";
		std :: cin>> ProcessorSpeed;

	}
			//	Upgrade...
			void upgradeRam()
			{
				std :: cout<<" \n\nRAM Upgrade Laptop Model : "<< Model << " \nCurrent RAM : "<<Ram <<"\n";
				std :: cin>> Ram;
			}

			//		Result Display...
			void Display() const
			{
				std :: cout<<"\n\t\tLaptop Specification \n Brand : "<< Brand <<"\nModel : "<<Model ;
				std :: cout<<"\nSerial Gen : "<<Serial <<"\n ScreenSize : "<<ScreenSize <<"\n Color : "<<Color;
				std :: cout<<"\n ProcessorSpeed : "<<ProcessorSpeed <<"\nRAM : "<<Ram <<"\n\n\t Price : "<<Price;
			}
};

int main()
{
	Laptop Dell,HP;

	std :: cout<<"Select Laptop data and Specs\n\n";
		Dell.laptopSpec();
		Dell.Display();
		Dell.upgradeRam();
		Dell.Display();
	return 0;
}
