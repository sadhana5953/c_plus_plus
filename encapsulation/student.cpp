//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college
#include<iostream>
using namespace std;
class Student
{
	int id,age;
	char course[50],city[50];
	string name,email,college;
	
	public :
	
	void input(int i)
	{
		cout << "Enter " <<i+1 <<" student detail :\n";
		cout <<"Enter Name : ";
		getline(cin , name);
		cout << "Enter Id : ";
		cin >> id ;
		cout << "Enter age : ";
		cin >> age;
		cout << "Enter course : ";
		cin >> course;
		cout << "Enter city : ";
		cin >> city;
		cin.ignore();
		cout << "Enter email : ";
		getline(cin , email);
		cout << "Enter college name : ";
		getline(cin , college);
		cout <<endl;
	}
	
	void output(int i)
	{
		cout << "detail of " <<i+1 <<" student :\n";
		cout << "Name : " << name << endl;
		cout << "Id : " << id << endl;
		cout << "Age : " << age << endl;
		cout << "Course : " << course << endl;
		cout << "City : " << city << endl;
		cout << "E-mail : " << email << endl;
		cout << "College : " << college << endl<<endl;
	}
};
main()
{
	class Student stu[5];
	int i;
	for(i=0;i<5;i++)
	{
		stu[i].input(i);
	}
	for(i=0;i<5;i++)
	{
		stu[i].output(i);
	}
}