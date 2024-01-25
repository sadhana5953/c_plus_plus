#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout << "Enter starting year :";
	cin >> x;
	cout << "Enter ending year :";
	cin >> y;
	
	int n=(y-x)/4+1;
	
	int a[n],i;
	
	for(;x<=y;x++)
	{
		if(x%4==0)
		{
			for(i=0;i<n;i++)
			{
				a[i]=x;
				x+=4;
			}
			break;
		}
	}
	cout << "\nLeap year : ";
	for(i=0;i<n;i++)
	{
		cout << a[i] << ' ';
	}
}
