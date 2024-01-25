#include<iostream>
using namespace std;
main()
{
	int n;
	cout << "Enter the size of array :";
	cin >> n;
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		cout << "enter a["<<i<<"] : ";
		cin >> a[i];
	}
	cout << endl;
	
	for(i=0;i<n;i++)
	{
		cout << a[i] << ' ';
	}
	cout << "\n\nEven : ";
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i] << ' ';
		}
	}
}
