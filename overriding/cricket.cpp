//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class ODIMatch
//- Override the getTotalOvers() method in both classes.

#include<iostream>
using namespace std;
class Cricket
{
	protected:
	int over;
	
};
class T20Match:public Cricket
{
	public:
	
	void getTotalOvers()
	{
		over=20;
		cout << "Total over of T20 match :- "<<over<<endl;
	}
};
class ODIMatch:public Cricket
{
	public:
	
	void getTotalOvers()
	{
		over=50;
		cout << "Total over of ODI match :- "<<over<<endl;
	}
};
main()
{
	T20Match t1;
	ODIMatch d1;
	t1.getTotalOvers();
	d1.getTotalOvers();
}
