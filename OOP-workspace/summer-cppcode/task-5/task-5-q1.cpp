#include <iostream>
class Edwardes
{

	static int serialNum;
	int objectcounter;
	public :
	Edwardes()
	{
		objectcounter=(serialNum=serialNum+100);
	}

	//	Display function
		void Display()
		{
			std :: cout<<"\nI'm object with Serial Number : 2023Edwardes0"<<objectcounter;
		}

		int GetserialNum() const
		{
			return objectcounter;
		}
};

int Edwardes :: serialNum=0;


int main()
{
	Edwardes test01,test02, test03;
	test01.Display();
	test02.Display();
	test03.Display();
}
