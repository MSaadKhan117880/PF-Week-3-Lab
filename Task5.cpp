#include<iostream>
using namespace std;

int main()
{
cout<<endl;

float weight=2.204;
float in_weight;
float lbs;

cout<<"Enter the weight(kgs): ";
cin>>in_weight;

lbs=in_weight*weight;

cout<<"Your entered weight(kgs) is "<<in_weight<<endl;
cout<<"Weight(kgs) in Pounds(lbs) "<<lbs<<endl;

cout<<endl;
return 0;
}
