//Write a Program to create a class that illustrates the concept of handling all types of exceptions using general exceptions.

#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter the value of a :";
	cin>>a;
	cout<<"Enter the value of b :";
	cin>>b;
	
	try
	{
		if(b!=0)
		{
			int c=a/b;
			cout<<"division : "<<c;
		}
		else
		{
			throw (b);
		}
	}
	catch(int b)
	{
		cout<<"A number cannot be divided by zero !";
	}
}
