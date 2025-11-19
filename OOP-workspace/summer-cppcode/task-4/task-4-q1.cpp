#include <iostream>
#include <ostream>
class tollBooth
{
		//	Data Field
	unsigned int totalCar,
				 paidCar,
				 unpaidCar;
	double	totalMoney;
	
	public :
		//		Default Constructor
	tollBooth()
	{
		std :: cout<<"Constructor called\n";
	}

	//		Functions to declare
	//	data member setup
	void setDataMembers()
	{
		totalCar=0,
			paidCar=0,
			unpaidCar=0;
		totalMoney=0;
	}

	//	paying cars
	void payingCar()
	{
		totalCar++,
			paidCar++;
		totalMoney=totalMoney+ 50;
	}

	//	not paying cars
	void nopayCar()
	{
		totalCar++;
		unpaidCar ++;
	}

	//	Result display 
	void Display()
	{
		std :: cout<<"Total number of Cars : "<< totalCar << std :: endl;
		std :: cout<<"Paid Cars : "<< paidCar <<std :: endl;
		std :: cout<<"Unpaid Cars : "<< unpaidCar << std :: endl;
		std :: cout<< "Total Amount collected from TollBooth : "<<totalMoney << std :: endl;
	}

};

int main()
{
	tollBooth cars;
	int selector;
		//	Key Designing for a TollBooth...
		std :: cout<<"\t\t TollBooth Service \n \t Press 1 to for Paying Cars \n\t Press 2 for Non paid Cars \n\t Press 3 for Display the total sum \n ";
		
	if (true) 
					//	Making all varible set to 0...
			cars.setDataMembers();
	{
			
		do {
			std :: cin>> selector ;

				switch (selector) 
				{
					case 1:
						cars.payingCar();
						std :: cout<<"Select Again : \n";
						break;
					case 2:
						cars.nopayCar();
						std :: cout<<" Select Again : \n";
						break;
					case 3:
						cars.Display();
						break;
				}		
		}
		while(selector!=3);
	}
		
	return 0;
}
