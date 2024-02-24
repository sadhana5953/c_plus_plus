#include<iostream>
using namespace std;
class RBI
{
	protected:
	int Interest;
	
	void set()
	{
		cout << "Enter the rate of interest :";
		cin >> Interest;
	}
};
class SBI :public RBI
{
	public :
	
	void getROI()
	{
		set();
		cout << "Rate of interest of SBI: " << Interest << "%" << endl;
	}
};
class BOB :public RBI
{
	public:
	void getROI()
	{
		set();
		cout << "Rate of interest of BOB: " << Interest << "%" << endl;
	}
};
class ICICI :public RBI
{
	public:
	void getROI()
	{
		set();
		cout << "Rate of interest of ICICI: " << Interest << "%" << endl;
	}
};
main()
{
	SBI s1;
	BOB b1;
    ICICI c1;
	s1.getROI();
	b1.getROI();
	c1.getROI();
}
