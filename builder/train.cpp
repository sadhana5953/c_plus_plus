//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records

#include<iostream>
using namespace std;
class Train
{
	int number,time,jk;
	string name,destination,source;
	
	public :
	
	void set(int i)
	{
		cout << "enter train ["<<i<<"] information :\n";
		cout << "enter number of train : ";
		cin >> number;
		cin.ignore();
		cout << "enter name of train : ";
		getline (cin,name);
		cout << "enter source of train : ";
		getline (cin,source);
		cout << "enter destination of train : ";
		getline (cin,destination);
		cout << "enter time of train : ";
		cin >> time;
		cout <<endl;
	}
	
	int check(int n,int i)
	{
		int y;
		if(n==number)
		{
			y=1;
			get(i,y);
		}
		else
		{
			y=0;
			return y;
		}
	}
	int get(int i,int y)
	{
		
		cout << "\ntrain ["<<i<<"] information :- \n";
		cout << "train number : " <<number <<endl; 
		cout << "train name : " <<name <<endl; 
		cout << "train source : " <<source <<endl; 
		cout << "train destination : " <<destination <<endl; 
		cout << "train time : " <<time <<endl <<endl; 
		
		return y;
	}
	void display(int i)
	{
		cout << "train"<<i<<":"<<number<<endl;
	}
};
main()
{
	Train t[3];
	int i;
	for(i=0;i<3;i++)
	{
		t[i].set(i+1);
	}
	int n,x=0;
	cout << "enter train number for the information :";
	cin >> n;
	
	for(i=0;i<3;i++)
	{
	  x=t[i].check(n,i+1);
	  if(x==1)
	  {
	  	break;
	  }
	}
	
	if(x==0)
	{
		cout << "Error : Train not found !";
	}
	
}
