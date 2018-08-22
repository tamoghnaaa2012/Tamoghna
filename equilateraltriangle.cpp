//include library
#include<iostream>
#include<cmath>
using namespace std;
// declare the main function
float main()
//the process begins
{
//declare required variables
double s1,area,sqrt;
/*s1 is the length of the side of equilateral triangle
area is the area of equilateral triangle
sqet is square root*/
cout<< " calculate the area of the equilateral triangle"<<endl;
cout<< " input the value of the side of the equilateral triangle: "<<endl;
cin>>s1;
area = (sqrt)(3)/4*(s1*s1);
cout<< " The area of equilateral triangle is: "<<area<<endl;
cout<<endl;
return 0;
}
