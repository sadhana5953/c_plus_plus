//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.

#include<iostream>
using namespace std;
class Temperature
{
	public :
	float c;
	
	void set()
	{
		cout << "Enter temperature in Celsius : ";
		cin >> c;
	}
};
class Fehrenheit :public Temperature
{
	public :
	
	float F;
	
	void toFehrenheit()
	{
		set();
		
		F = (9/5)*c + 32;
	}
};
class Kelvin :public Fehrenheit
{
	public :
	float k;
	
	void get()
	{
		toFehrenheit();
		
		k=(F - 32) * 5 / 9 + 273.15;
		
		cout << c << " degrees Celsius is equal to "<<F<<" degrees Fahrenheit.\n";
		cout << F << " degrees Fahrenheit is equal to "<< k <<" Kelvin.";
	}
};
main()
{
	Kelvin k1;
	k1.get();
}
