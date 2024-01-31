//Q.3 Write a program to convert second into hh: mm: ss.
#include<iostream>
using namespace std;
main()
{
    int hour,minute,second;
    
    cout << "enter second :";
    cin >> second;
    
    hour=second/3600;
    second-=(hour*3600);
    minute=second/60;
    second-=(minute*60);
    
    cout << "hh : mm : ss\n";
    cout << hour << " : " << minute << " : " << second;
}
