#include<iostream>
using namespace std;

int main()
{
cout<<endl;

float num1;
float num2;
float num3;
float num4;
float num5;
float num6;
float num7;
float num8;
float num9;
float num10;

float add;
float mul;
float div;
float sub;
float result;



cout<<"Enter number 1: ";
cin>>num1;
cout<<"Enter number 2: ";
cin>>num2;
cout<<"Enter number 3: ";
cin>>num3;
cout<<"Enter number 4: ";
cin>>num4;
cout<<"Enter number 5: ";
cin>>num5;
cout<<"Enter number 6: ";
cin>>num6;
cout<<"Enter number 7: ";
cin>>num7;
cout<<"Enter number 8: ";
cin>>num8;
cout<<"Enter number 9: ";
cin>>num9;
cout<<"Enter number 10: ";
cin>>num10;

add=num3+num5+num9;
mul=num7*num10*num6;
div=num8/num4;
sub=num2-num1;

result = add+mul+div+sub;

cout<<endl;
cout<<"Addition is "<<add<<endl;
cout<<"Multiplication is " <<mul<<endl;
cout<<"Division is " <<div<<endl;
cout<<"Substraction is "<<sub<<endl;

cout<<endl;
cout<<"The Resultant Value is "<<result<<endl;

cout<<endl;
return 0;
}
