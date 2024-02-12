//Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. 
//Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
//In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.
#include<iostream>
using namespace std;
class Shape
{
	protected:
	int height,width;
	
	Shape()
	{
		cout << "Enter height :";
		cin >> height;
		cout << "Enter width :";
		cin >> width;
	}
};
class Rectangle: public Shape
{
	public :
		
	void area()
	{
		int ans=height*width;
		cout << "Rectangle area is : "<<ans<<endl;
	}
};
class Triangle: public Shape
{
	public :
		
	void area()
	{
		int ans=height*width*1/2;
		cout << "Triangle area is : "<<ans<<endl;
	}
};
main()
{
	Rectangle rectangle;
	rectangle.area();
	Triangle triangle;
	triangle.area();
}
