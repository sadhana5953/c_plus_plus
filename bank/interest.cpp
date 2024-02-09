//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes

#include<iostream>
using namespace std;
class RBI
{
	public :
	float Interest;
	
	void getROI()
	{
		cout << "Rate of interest of RBI: " << Interest << "%" << endl;
	}
};
class SBI : public RBI
{
	public :
	float Interest;
	
	void getROI()
	{
		cout << "Rate of interest of SBI: " << SBI::Interest << "%" << endl;
	}
};
class BOB : public RBI
{
	public :
	float Interest;
	
	void getROI()
	{
		cout << "Rate of interest of BOB: " << BOB::Interest << "%" << endl;
	}
};
class ICICI : public RBI
{
	public :
	float Interest;
	
	void getROI()
	{
		cout << "Rate of interest of ICICI: " << ICICI::Interest << "%" << endl;
	}
};
main()
{
	RBI rate1;
	SBI rate2;
    BOB rate3;
    ICICI rate4;
    
	cout << "Enter rate of interest for RBI: ";
    cin >> rate1.Interest;
    cout << "Enter rate of interest for SBI: ";
    cin >> rate2.Interest;
    cout << "Enter rate of interest for BOB: ";
    cin >> rate3.Interest;
    cout << "Enter rate of interest for ICICI: ";
    cin >> rate4.Interest;
    
    rate1.getROI();
    rate2.getROI();
    rate3.getROI();
    rate4.getROI();
    
}
