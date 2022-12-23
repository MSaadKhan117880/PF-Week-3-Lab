#include<iostream>
using namespace std;

int main()
{
cout<<endl;

string name;
float matric;
float inter;
float ecat;
float matricObt;
float interObt;
float ecatObt;
float aggregate;

cout<<"Enter Your Name: ";
cin>>name;
cout<<"Enter you Matric Marks out of 1100: ";
cin>>matricObt;
cout<<"Enter your Intermediate Marks out of 550: ";
cin>>interObt;
cout<<"Enter you ECAT Marks out of 400: ";
cin>>ecatObt;

matric=(matricObt/1100.0)*10;
inter=(interObt/550.0)*40;
ecat=(ecatObt/400.0)*50;

aggregate=matric+inter+ecat;

cout<<endl;
cout<<"================================"<<endl;
cout<<"Your Name is "<<name<<endl;
cout<<"Your Matric Marks are "<<matricObt<<endl;
cout<<"Your Intermediate Marks are "<<interObt<<endl;
cout<<"Your ECAT Marks are "<<ecatObt<<endl;
cout<<"Your Aggregate is "<<aggregate<<endl;
cout<<"================================"<<endl;

cout<<endl;
return 0;
}
