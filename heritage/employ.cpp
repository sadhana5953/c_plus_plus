//Write a Program to read and print Employee information with the use of Multilevel inheritance. 

#include<iostream>
using namespace std;
class A
{
	protected:
	
	int id,salary,exp;
	long long contact;
	char role[50],email[50];
	string name,add,comp;
	
	void set()
	{
		cout << "Enter employ id :";
		cin >> id;
		cin.ignore();
		cout<< "Enter employ name :";
		getline(cin,name);
		cout << "Enter employ role :";
		cin >> role;
	}
};
class B:public A
{
	protected:
		
	void setter()
	{
		set();
		cout << "Enter employ salary :";
		cin >> salary;
		cout << "Enter employ experince :";
		cin >> exp;
	}
};
class C:public B
{
	protected:
		
	void print()
	{
		setter();
		cin.ignore();
		cout<< "Enter company name :";
		getline(cin,comp);
		//cin.ignore();
		cout<< "Enter employ address name :";
		getline(cin,add);
	}
	
	void getter()
	{
		cout <<"\nInformation of the employ :-\n";
		cout <<"Employ name : "<<name<<endl;
		cout <<"Employ role : "<<role<<endl;
		cout <<"Employ salary : "<<salary<<endl;
	}
};
class D:public C
{
	public:
		
	void sett()
	{
		print();
		cout << "Enter employ E-mail :";
		cin >> email;
		cout << "Enter employ contact number :";
		cin >> contact;
	}
	
	void get()
	{
		getter();
		cout <<"Employ id : "<<id<<endl;
		cout <<"Employ experince : "<<exp<<endl;
		cout <<"Employ comapny name : "<<comp<<endl;
		cout <<"Employ address : "<<add<<endl;
		cout <<"Employ email : "<<email<<endl;
		cout <<"Employ contact : "<<contact<<endl;
	}
};
main()
{
	D emp;
	emp.sett();
	emp.get();
}
