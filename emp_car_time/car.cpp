//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year
#include<iostream>
using namespace std;
class Record_system
{
	public :
	int id,year;
	char color[50],model[50];
	string company;
	
	void input(int i)
	{
		cout <<"enter " <<i+1 <<" employ detail :\n";
		cout << "enter car id :";
		cin >> id;
		cin.ignore();
		cout << "enter company name :";
		getline(cin ,company);
		cout << "enter color :";
		cin >> color;
		cout << "enter car model :";
		cin >> model;
		cout << "enter car release year :";
		cin >> year;
		cout <<endl;
	}
	
	void output(int i)
	{
		cout << "detail of "<<i+1 <<" car :\n";
		cout << "car-id : " << id <<endl;
		cout << "company name : " << company <<endl;
		cout << "color : " << color <<endl;
		cout << "car model : " << model <<endl;
		cout << "release year : " << year <<endl<<endl;
	}
};
main()
{
	Record_system car[4];
	int i;
	for(i=0;i<4;i++)
	{
		car[i].input(i);
	}
	for(i=0;i<4;i++)
	{
		car[i].output(i);
	}
}
