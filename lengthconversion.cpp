//include library
#include<iostream>
using namespace std;
// declare the main function
int main()
//the process begins
{
//declare required variables
double cml,ml,kml;
/*cml is lenghth in centimeter to be input
ml is length in meter 
kml is length in kilometer */
cout << "convert centimeter into meter and kilometer"<<endl;
cout << "input the distance in centimeter"<<endl;
cin >> cml;
ml = ( cml/100);
kml = (cml/100000);
cout << " The distance in meter is: "<< ml << endl;
cout << " The distance in kilometer: "<< kml << endl;
cout << endl;
return 0;
}
