//Q.1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14
//
//Output:
//14 feet 6 inch

#include<iostream>
using namespace std;
class Distance
{
	public :
	int feet,inch,feet1,inch1,feet2,inch2;
	
	void set()
	{
		cout << "enter feet-1 : ";
		cin >> feet1;
		cout << "enter inch-1 : ";
		cin >> inch1;
		cout << "enter feet-2 : ";
		cin >> feet2;
		cout << "enter inch-2 : ";
		cin >> inch2;
	}
	
	void get()
	{
		feet=feet1+feet2;
		inch=inch1+inch2;
		
		int x=inch/12;
		inch%=12;
		
		cout << "Feet : "<< feet+x <<endl;
		cout << "Inch : "<< inch; 
	}
	
};
main()
{
	Distance d1;
	d1.set();
	d1.get();
}
