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
		cout << "enter id : ";
		cin >> id;
		cout << "enter hotel type : ";
		cin >> type;
		cout << "enter rating : ";
		cin >> rating;
		cin.ignore();
		cout << "enter hotel location : ";
		getline (cin,location);
		cout << "enter hotel staff quantity : ";
		cin >> staff;
		cout << "enter hotel room quantity : ";
		cin >> room;
		cout <<endl;
	}
	
	void output()
	{
		cout <<  name  <<endl;
		cout << "Estabish year - "<<year<<endl;
		cout << "Id : "<<id <<endl;
		cout << "Hotel type : "<<type <<endl;
		cout << "Hotel rating : "<<rating <<endl;
		cout << "Hotel location : "<<location <<endl;
		cout << "Hotel staff quantity : "<<staff <<endl;
		cout << "Hotel room quantity : "<<room <<endl<<endl;
	}
};

string Hotel::name="Taj Hotel";
int Hotel ::year=2000;

main()
{
    int n;
	cout << "enter the value of n :";
	cin >> n;
	Hotel hotel[n];
	int i;
	for(i=0;i<n;i++)
	{
	    hotel[i].input();	
	}	
    for(i=0;i<n;i++)
	{
	    hotel[i].output();		
	}	
}
