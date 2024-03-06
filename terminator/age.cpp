// Write a Program to throw 0 if the age of the user is less than 18, otherwise print that you are eligible to vote. 
// Also, handle that thrown exception and print you are not eligible to vote.
#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"enter your age :";
	cin>>age;
	
	try
	{
		if(age<18)
		{
			throw(0);
		}
		else
		{
			cout<<"you are eligible to vote. ";
		}
	}
	catch(int i)
	{
		cout<<"you are not eligible to vote!";
	}
}
