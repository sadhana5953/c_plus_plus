//Q.2 Write a Program to get and display Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity

#include<iostream>
using namespace std;
class Cafe
{
	int id,rating,year,staff;
	char type[50];
	string name,location;
	
	public :
	
	Cafe()
	{
		cout << "Enter Cafe Information :-\n";
		cout << "Enter Cafe id : ";
		cin >> id;
		cin.ignore();
		cout << "Enter Cafe name : ";
	    getline(cin,name);
		cout << "Enter Cafe type (rooftop or normal) : ";
		cin >>type;
		cout << "Enter Cafe rating (1 Star, 2 Start, ..., 5 Star) : ";
		cin >>rating;
		cin.ignore();
		cout << "Enter Cafe location (city name) : ";
		getline(cin,location);
		cout << "Enter Cafe establish year : ";
		cin >>year;
		cout << "Enter Cafe staff quantity : ";
		cin >>staff;
		cout <<endl;
	}
	
	~Cafe()
	{
		cout << "Cafe Information :-\n";
		cout << "Cafe id : " << id <<endl;
		cout << "Cafe name : " << name <<endl;
		cout << "Cafe type : " << type <<endl;
		cout << "Cafe rating : " << rating <<endl;
		cout << "Cafe loaction : " << location <<endl;
		cout << "Cafe establish year : " << year <<endl;
		cout << "Cafe staff quantity : " << staff <<endl<<endl;
	}
};
main()
{
	int n;
	cout << "enter the value of n :";
	cin >> n;
	
	Cafe c1[n];
	for(int i=0;i<n;i++)
	{
		c1[i];
	}
}
