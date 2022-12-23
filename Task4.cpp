#include<iostream>
using namespace std;

int main()
{
cout<<endl;

float weight=0.45;
float in_weight;
float kg;

cout<<"Enter the weight(lbs): ";
cin>>in_weight;

kg=weight*in_weight;

cout<<"Your entered weight(lbs) is "<<in_weight<<endl;
cout<<"Weight(lbs) converted to Kilograms(kgs) "<<kg<<endl;

cout<<endl;
return 0;
}
