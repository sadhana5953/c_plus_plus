//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
//- a person cannot be able to vote if his/her age is less than 18
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[50];
	printf("Enter password :");
	scanf(" %[^\n]s",a);
	int l=strlen(a);
	
	int i,check=1;
	for(i=0;i<l;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			check=0;
		}
	}
	try
	{
		if(check==1)
		{
			throw(check);
		}
		else
		{
			cout<<"your password is correct.";
		}
	}
	catch(int check)
	{
		cout<<"please enter atleast one character in capital letter !";
	}
}
