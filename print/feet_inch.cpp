 #include<iostream>
 using namespace std;
 main()
 {
 	int inch,feet;
 	cout << "Enter feet : ";
 	cin >> feet;
 	cout << "Enter inches : ";
 	cin >> inch;
 	int i;
 	for(i=0;inch>=12;i++)
 	{
 	    inch-=12;	
	}
	cout << "\nFeet - " << feet+i <<" , "<< "Inch - " << inch;
 }
