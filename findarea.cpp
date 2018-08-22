//include library
#include<iostream>
using namespace std;
// declare the main function
int main()
//the process begins
{
//declare required variables
double base,height,area;
/*base is the base of triangle to be input by user
height is the height of triangle to be input by user
area is area of triangle needed to calculate*/
cout<< "Enter base"<<endl;
cin>>base;
cout<< "Enter height"<<endl;
cin>>height;
area =((0.5)*(base*height));
cout<< "The area of the triange is: "<< area << endl;
cout<< endl;
return 0;
}
