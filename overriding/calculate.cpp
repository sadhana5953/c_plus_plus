//Q.1 Write a Program to perform all basic arithmetic. 
//operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition

#include<iostream>
using namespace std;
class A
{
	protected:
	int a,b,c,d,e;
};
class B:public A
{
	public :
	
	void calculate(int a,int b)
	{
		this->a=a;
		this->b=b;
		cout << a << "/" << b << "=" << a/b <<endl;
	}
	void calculate(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		cout << a << "-" << b << "-" << c << "=" << a-b-c <<endl;
	}
	void calculate(int a,int b,int c,int d)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		cout << a << "x" << b << "x" << c << "x" << d << "=" << a*b*c*d <<endl;
	}
	void calculate(int a,int b,int c,int d,int e)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		this->e=e;
		cout << a << "+" << b << "+" << c << "+" << d << "+" <<e << "=" << a+b+c+d+e <<endl;
	}
};
main()
{
	int a,b,c,d,e;
	
	    cout << "enter value of a :";
		cin >> a;
		cout << "enter value of b :";
		cin >> b;
		cout << "enter value of c :";
		cin >> c;
		cout << "enter value of d :";
		cin >> d;
		cout << "enter value of e :";
		cin >> e;
		
	B b1;
	b1.calculate(a,b);
	b1.calculate(a,b,c);
	b1.calculate(a,b,c,d);
	b1.calculate(a,b,c,d,e);
}
