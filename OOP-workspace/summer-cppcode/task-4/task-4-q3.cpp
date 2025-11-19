#include <cmath>
#include <iostream>

class Number
{
	int result;
	float num;

	public :

	Number() : result(1) 
	{
		std :: cout<< "Enter the Number to Validate The Factorial\n";
		std :: cin>> num;
	}
	
	//	checking if the number is Positive or Negative...
	bool setType()
	{
		bool flag;
		if(num>=0)
		{
			flag=true;
		}
		else 
		{
			flag=false;
		}
		return flag;
	}

	//		check if the number is whole or not...
		bool setWhole()
		{
			bool flag;
			if(num==floor(num))
			{
				flag=true;
			}
			else 
			{
				flag=false;
			}
			return flag;
		}

		//	Finding the Factorial 
		void Factorial()
		{
			for(int i=1 ;i<=num;i++)
			{
				result= result* i;
			}
		}

		//	Display function 
			void Display() const
			{
				std :: cout<<"Number = "<< num <<"\n";
				std :: cout<<"Factorial = "<<result<< "\n";
			}


};

int main()
{
	Number fact;

		if(fact.setType()==true)
		{
			if (fact.setWhole()==true) 
			{
				fact.Factorial();
				fact.Display();
			}
			else 
			{
				std :: cout<<"Invalid\n";
			}
		}
		else 
		{
			std :: cout<<"Invalid\n";
		}
	return 0;
}
