//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
#include<iostream>
using namespace std;
class Customer
{
	int id,age,year;
	long  number;
	char city[50],brand[50];
	string name;
	
	public :
		
	void setter(int i)
	{
		cout << "Enter " <<i+1 <<" costomer detail :\n";
		cout << "Enter Name : ";
		getline(cin , name);
		cout << "Enter Id : ";
		cin >> id;
		cout << "Enter Age : ";
		cin >> age;
		cout << "Enter City : ";
		cin >> city;
		cout << "Enter Mobile Number : ";
		cin >> number;
		cout << "Enter Simcard Validity : ";
		cin >> year;
		cout << "Enter Brand Name : ";
		cin >> brand;
		cin.ignore();
		cout <<endl;
	}
	
	void getter(int i)
	{
		cout << "detail of " <<i+1 << " customer :\n";
		cout << "Name : " << name <<endl;
		cout << "Id : " << id <<endl;
		cout << "Age : " << age <<endl;
		cout << "City : " << city <<endl;
		cout << "Mobile Number : " << number <<endl;
		cout << "Simcard Validity : " << year <<endl;
		cout << "Telecome brand name : " << brand <<endl<<endl;
	}
};
main()
{
	Customer cust[5];
	int i;
	for(i=0;i<5;i++)
	{
		cust[i].setter(i);
	}
	for(i=0;i<5;i++)
	{
		cust[i].getter(i);
	}
}
