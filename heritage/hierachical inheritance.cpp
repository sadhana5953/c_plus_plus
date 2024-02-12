//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

#include<iostream>
using namespace std;
class A
{
	protected:
	int n;
	
	void set()
	{
		cout << "Enter the value :";
		cin >> n;
	}
};
class B: public A
{
	public :
    int square;
    void get()
    {
    	set();
    	square=n*n;
    	cout << "square of "<< n << " is = "<<square<<endl;
	}
};
class C: public A
{
	public :
    int cube;
    void get()
    {
    	set();
    	cube=n*n*n;
    	cout << "cube of "<< n << " is = "<<cube<<endl;
	}
};
main()
{
	B square;
	square.get();
	C cube;
	cube.get();
}
