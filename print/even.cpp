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





//xox
// #include<iostream>
// using namespace std;
// main()
// {
// 	int user1,user2;
	
// 	int arr[9]={1,2,3,4,5,6,7,8,9};
// 	cout<<"user 1 = 'o'\n";
// 	cout<<"user 2 = 'x'\n\n";
	
// 	cout<< arr[0] <<" | "<< arr[1]<< " | "<< arr[2]<<endl;
// 	cout<<"-----------\n";
// 	cout<< arr[3] <<" | "<< arr[4] <<" | "<< arr[5]<<endl;
// 	cout<<"-----------\n";
// 	cout<< arr[6] <<" | "<< arr[7]<< " | "<< arr[8]<<endl;
	
	
	
// 	cout<<"Enter given number where you want to move.\n";
// 	cout<<"user-1: ";
// 	cin>>user1;
// 	cout<<"\n  -----------\n";
// 	for(int i=0;i<7;i+=3)
// 	{
// 		cout<<" | ";
// 		for(int j=0;j<3;j++)
// 		{
// 			cout<<arr[i+j]<<" | " ;
// 		}
// 		cout<<"\n  -----------\n";
// 	}
// 	//9724057299
// }
