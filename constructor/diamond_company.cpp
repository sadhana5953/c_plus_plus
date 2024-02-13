//Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

#include<iostream>
using namespace std;
class Company
{
	int id,staff,rev,raw_diamonds,export_diamonds;
	string comp,ceo;
	
	public :
	
	Company(int id,string comp,int staff,int rev,int raw_diamonds,int export_diamonds,string ceo)
	{
		this ->id = id;
		this ->comp = comp;
		this ->staff = staff;
		this ->rev = rev;
		this ->raw_diamonds = raw_diamonds;
		this ->export_diamonds = export_diamonds;
		this ->ceo = ceo;
	}
	
	void get()
	{
		cout << "Company Information :-\n";
		cout << "Comapny id : " << id <<endl;
		cout << "Comapny name : " << comp <<endl;
		cout << "Comapny staff quantity : " << staff <<endl;
		cout << "Comapny revenue : " << rev <<endl;
		cout << "Comapny raw diamond : " << raw_diamonds <<endl;
		cout << "Comapny export diamond : " << export_diamonds <<endl;
		cout << "Comapny ceo name : " << ceo <<endl<<endl;
	}
};
main()
{
	int id,s,r,rd,d,n;
	string name,comp;
	
		cout << "enter company information :\n";
		cout << "enter company id : ";
		cin >> id;
		cin.ignore();
		cout << "enter the company name : ";
		getline(cin,name);
		cout << "enter the quantity of staff : ";
		cin >> s;
		cout << "enter Comapny revenue : ";
		cin >> r;
		cout << "enter no. of raw diamonds imported per year : ";
		cin >> rd;
		cout << "enter no. of diamonds export per year : ";
		cin >> d;
		cin.ignore();
		cout << "enter company ceo name : ";
		getline(cin,comp);
		//c1[i]=Company(id,name,s,r,rd,d,comp);
		cout <<endl;
	
	Company c1(id,name,s,r,rd,d,comp);
	c1.get();
}
