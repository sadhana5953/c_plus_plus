//Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
#include<iostream>
using namespace std;
class Convert
{
	public :
	int h,m,s;
	
	void input()
	{
		cout << "enter seconds :";
		cin >> s;
	}
	void output()
	{
		h=s/3600;
		s-=(h*3600);
		m=s/60;
		s-=(m*60);
		
		cout << "hh : mm : ss \n";
		cout << h << " : " << m << " : " << s;
	}
};
main()
{
	Convert time;
	time.input();
	time.output();
}
