#include<iostream>
using namespace std;

int main()
{
cout<<endl;

float charge;
int time;
float current;

cout<<"Enter the Charge: ";
cin>>charge;
cout<<"Enter the Time(s): ";
cin>>time;

current=charge/time;

cout<<"The current is " <<current<<endl;

cout<<endl;
return 0;
}
