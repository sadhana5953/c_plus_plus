//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
#include<iostream>
using namespace std;
class Hotel
{
	int id,rating,staff,room;
	static int year;
	char type[50];
	static string name;
	string location;
	
	public :
		
	void input()
	{
		cout << "Enter hotel id : ";
		cin >>id;
		cout << "Enter hotel type : ";
		cin >> type;
		cout << "Enter hotel rating : ";
		cin >> rating;
		cin.ignore();
		cout << "Enter hotel location : ";
		getline (cin,location);
		cout << "Enter hotel staff Quantity : ";
		cin >> staff;
		cout << "Enter hotel room Quantity : ";
		cin >> room;
		cout <<endl;
	}
	 
	void output()
	{
		cout<<name <<endl;
		cout <<"hotel establish year : " <<year <<endl;
		cout << "Id : " << id <<endl;
		cout << "Type : " << id <<endl;
		cout << "Hotel rating : " << id <<endl;
		cout << "Location : " << id <<endl;
		cout << "hotel staff Quantity  : " << id <<endl;
		cout << "hotel room Quantity  : " << id <<endl <<endl;
		
	}
		
};

string Hotel::name="Raj Hotel";
int Hotel::year =2000;

main()
{
	int n;
	cout << "enter value of n : ";
	cin >> n ;
	
	Hotel hotel[n];
	
	for(int i=0;i<n;i++)
	{
		hotel[i].input();
	}
	for(int i=0;i<n;i++)
	{
		hotel[i].output();
	}
}