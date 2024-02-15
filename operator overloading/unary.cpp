//unary operator
#include<iostream>
using namespace std;
class Math
{
	int n;
	
	public :
		
	void set()
	{
		cout << "Enter the value of n:";
		cin >> n;
	}
	void get()
	{
		cout << "n is "<< n <<endl;
	}
	void operator++(int)
	{
		n++;
	}
};
main()
{
	Math m1;
	m1.set();
	m1++;//m1.operator++(int)
	m1.get();
}