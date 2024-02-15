//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
#include<iostream>
using namespace std;
class Math
{
	int n;
	
	public:
	void set(int i)
	{
		cout << "Enter the value of object m"<<i<<":";
		cin >> n;
	}
	
	bool operator>(Math m2)
	{
	   if(this->n>m2.n)
	   {
	   	    return true;
	   }
	   else
	   {
	   	    return false;
	   }
	}
	void get(int i)
	{
		cout << "m"<<i<<" is = "<< n <<endl;
	}
};
main()
{
	Math m1,m2;
	
	m1.set(1);
	m2.set(2);
	
	m1.get(1);
	m2.get(2);
	if(m1>m2) //m1.operator>(m2)
	{
		cout << "\nm1 object contains a higher value";
	}
	else
	{
		cout << "\nm2 object contains a higher value";
	}
}