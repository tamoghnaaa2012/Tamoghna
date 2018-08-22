//include library
#include<iostream>
using namespace std;
// declare the main function
int main()
//the process begins
{
//declare required variables
double ftemp,ctemp;
/*ftemp is unit of temperature in fehrenheit to be input
ctemp is unit of temperature in celsius */
cout<< "convert celsius into fahrenheit"<<endl;
cin>> ctemp;
ftemp = ((ctemp*1.8)+32);
cout<< " The temperature in fahrenheit: "<< ftemp << endl;
cout<< endl;
return 0;
}
