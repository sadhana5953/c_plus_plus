//Q.2 Write a Program to make a Supermarket Billing System.
//Requirements:
//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number

#include<iostream>
using namespace std;
class Verify
{
	static long password; 
	long pass;
	static string id;
	string u;
	
	public :
	void user()
	{
		s:
		cout << "Enter your user ID: ";
		getline(cin,u);
		cout << "Enter your password: ";
		cin >> pass;
		cin.ignore();
		
		if(u==id&&password==pass)
	    {
		    cout << "\n* WElCOME TO SUPERMARKET *\n";
	    }
	    else
	    {
		    cout << "Error : Invalid user ID or password!\n\n";
		    goto s;
	    }
	    
	}
	
};

class Supermarket
{
	int num,quantity,price,discount;
	string name;
	
	public :
		
	void set()
	{
		cout << "enter item detail :\n";
		cout <<"Enter Item Number : ";
		cin >> num;
		cin.ignore();
		cout << "Enter Item Name : ";
		getline(cin,name);
		cout <<"Enter Item Quantity : ";
		cin >> quantity;
		cout <<"Enter Item Price : ";
		cin >> price;
		cout <<"Enter Item Discount : ";
		cin >> discount;
		cout << endl;
	}
	
	int check()
	{
		int ch;
		ch=num;
	}
	
	void get(int i)
	{
		cout << "\nItem no["<<i<<"] bill : \n";
		cout <<"Item Number: "<<num<<endl;
		cout <<"Item Name: "<<name<<endl;
		cout <<"Item Quantity: "<<quantity<<endl;
		cout <<"Item Price: "<<price<<endl;
		cout <<"Item Discount: "<< discount<<endl;
	}
};
string Verify::id="user123";
long Verify::password= 12345678;

main()
{
	int n,i,x,y,j=0;
	Verify u1;
	u1.user();
	
	cout << "enter total item : ";
	cin >>n;
	Supermarket s1[n];
	
	for(i=0;i<n;i++)
	{
		s1[i].set();
	}
	
	cout <<"enter item number for bill : ";
	cin >> x;
	
	for(i=0;i<n;i++)
	{
	   	y=s1[i].check();
	   	
	   	if(x==y)
	   	{
	   		s1[i].get(i+1);
		}
		else
		{
			j++;
		}
	}
	
	if(j==n)
	{
		cout << "Error : Item Not Found !";
	}
	
}
