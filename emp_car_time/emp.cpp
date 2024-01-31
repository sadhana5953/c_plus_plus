//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name

#include<iostream>
using namespace std;
class Employ
{
	public :
		
	int id,age,salary,exp;
	char role[50],city[50];
	string name,company;
	
	void input(int i)
	{
		cout <<"enter " <<i+1 <<" employ detail :\n";
		cout << "enter employ id :";
		cin >> id;
		cin.ignore();
		cout << "enter employ name :";
		getline(cin ,name);
		cout << "enter employ age :";
		cin >> age;
		cout << "enter employ role :";
		cin >> role;
		cout << "enter employ salary :";
		cin >> salary;
		cout << "enter employ city :";
		cin >> city;
		cout << "enter employ experience :";
		cin >> exp;
		cin.ignore();
		cout << "enter company name :";
		getline(cin ,company);
		cout <<endl;
	}
	
	void output(int i)
	{
		cout << "detail of "<<i+1 <<" employ :\n";
		cout << "Name : " << name <<endl;
		cout << "Id : " << id <<endl;
		cout << "Age : " << age <<endl;
		cout << "Role : " << role <<endl;
		cout << "Salary : " << salary <<endl;
		cout << "City : " << city <<endl;
		cout << "Experience : " << exp <<endl;
		cout << "Company Name : " << company <<endl<<endl;
	}
};
main()
{
	Employ emp[5];
	int i;
	for(i=0;i<5;i++)
	{
		emp[i].input(i);
	}
	for(i=0;i<5;i++)
	{
		emp[i].output(i);
	}
}
