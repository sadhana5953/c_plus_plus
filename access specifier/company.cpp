//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.

#include<iostream>
using namespace std;
class Admin
{
	int revenue=1000000;
	
	protected:
	int m_salary=50000,emp_salary=30000,staff=100;
	char terminate[10]="yes";
	string comp_name="Royal Industries";
	
	public :
		
	void myAccess()
	{
		cout<<"\t Admin\n";
		cout <<"\t~~~~~~\n";
		cout <<"---------------------------------\n";
		cout <<"Company name : "<<comp_name<<endl;
		cout <<"Manager salary : "<<m_salary<<endl;
		cout <<"Employee salary : "<<emp_salary<<endl;
		cout <<"Total staff : "<<staff<<endl;
		cout <<"Total annual revenue : "<<revenue<<endl;
		cout <<"can terminate : "<<terminate<<endl;
		cout <<"---------------------------------\n\n";
	}
};
class Manager:public Admin
{
	public :
		
	void myAccess()
	{
		cout<<"\t Manager\n";
		cout <<"\t~~~~~~~~\n";
		cout <<"---------------------------------\n";
		cout <<"Company name : "<<comp_name<<endl;
		cout <<"Manager salary : "<<m_salary<<endl;
		cout <<"Employee salary : "<<emp_salary<<endl;
		cout <<"Total staff : "<<staff<<endl;
		cout <<"can terminate : "<<terminate<<endl;
		cout <<"---------------------------------\n\n";
	}
};
class Employee:public Manager
{
	public :
		
	void myAccess()
	{
		cout<<"\t Employee\n";
		cout <<"\t~~~~~~~~~\n";
		cout <<"---------------------------------\n";
		cout <<"Company name : "<<comp_name<<endl;
		cout <<"Employee salary : "<<emp_salary<<endl;
		cout <<"Total staff : "<<staff<<endl;
		cout <<"---------------------------------\n";
	}
};
main()
{
	Admin a1;
	Manager m1;
	Employee emp;
	a1.myAccess();
	m1.myAccess();
	emp.myAccess();
}
