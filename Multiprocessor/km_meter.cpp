//Q.2 Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70

#include<iostream>
using namespace std;
class Distance
{
	int km,meter;
	
	public :
		
	void set(int i)
	{
		cout << "Input "<<i<<" :-\n";
		cout << "Enter Meter :";
		cin >> meter;
		cout << "Enter km :";
		cin >> km;
		cout<<endl;
	}
	
	void get()
	{
		cout << "Meter = "<<meter<< " , " << "km = "<<km<<endl;
	}
	Distance operator+(Distance d2)
	{
		int a,b;
		Distance d;
		a=this->meter+d2.meter;
		b=this->km+d2.km;
		
		d.meter=a-1000*(a/1000);
		d.km=b+(a/1000);
		
		return d;
	}
	
};
main()
{
	Distance d1,d2,d3;
	
	d1.set(1);
	d2.set(2);
	d3 = d1+d2; //d3= d1.operator+(d2)
	d3.get();
}

