// Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.

#include<iostream>
using namespace std;
class A
{
	protected :
	int x=10;
};
class B
{
	protected :
	int x=20;
};
class C : public A , public B
{
	public :
	
	void get()
	{
		cout << "value of class A : "<<A::x <<endl;
		cout << "value of class B : "<<B::x <<endl;
	}
};
main()
{
	C display;
	display.get();
}
