//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods

#include<iostream>
using namespace std;
class A
{
	public :
	int a,b,c;
};
class B :public A
{
	public :
	
	int sum;
	
	void set()
	{
		cout << "enter the value of a : ";
		cin >> a;
		cout << "enter the value of b : ";
		cin >> b;
		cout << "enter the value of c : ";
		cin >> c;
	}
	
	void get()
	{
		sum=(a*a*a)+(b*b*b)+(c*c*c);
		cout << "sum is : " << sum ;
	}
};
main()
{
	B sum;
	sum.set();
	sum.get();
}
