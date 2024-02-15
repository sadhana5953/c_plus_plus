#include<iostream>
using namespace std;
class Math
{
	int x,y;
	
	public :
		
	void set(int i)
	{
		cout << "Enter the value of object ["<<i<<"] :\n";
		cout << "Enter the value of x :";
		cin >> x;
		cout << "Enter the value of y :";
		cin >> y;
		cout<<endl;
	}
	
	void get()
	{
		cout << "value of x = "<<x<<endl;
		cout << "value of y = "<<y<<endl;
	}
	Math operator+(Math m2)
	{
		int a,b;
		Math m;
		a=this->x+m2.x;
		b=this->y+m2.y;
		
		m.x=a;
		m.y=b;
		
		return m;
	}
	
};
main()
{
	Math m1,m2,m3;
	
	m1.set(1);
	m2.set(2);
	m3 = m1+m2; //m3= m1.operator+(m2)
	m3.get();
}