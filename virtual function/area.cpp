//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations

#include<iostream>
using namespace std;
class Shape
{
	protected:
	int r,h,w;
	float pi=3.14;
	
	virtual void calculate()=0;
};
class Circle:public Shape
{
	public:
	void calculate()
	{
		cout << "Enter the radius :";
		cin >>r;
		
		int area=pi*r*r;
		cout <<"The area of circle is = "<<area<<endl;
	}
};
class Triangle:public Shape
{
	public:
	void calculate()
	{
		cout << "Enter the heigth :";
		cin >>h;
		cout << "Enter the width :";
		cin >>w;
		
		int area=1/2*h*w;
		cout <<"The area of triangle is = "<<area<<endl;
	}
};
class Rectangle:public Shape
{
	public:
	void calculate()
	{
		cout << "Enter the heigth :";
		cin >>h;
		cout << "Enter the width :";
		cin >>w;
		
		int area=h*w;
		cout <<"The area of rectangle is = "<<area<<endl;
	}
};
main()
{
	Circle c1;
	Triangle t1;
	Rectangle r1;
	c1.calculate();
	t1.calculate();
	r1.calculate();
}
