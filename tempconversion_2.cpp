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
cout<< "convert fahrenheit into celsius"<<endl;
cin>> ftemp;
ctemp = ((ftemp-32)/1.8);
cout<< " The temperature in celsius: "<< ctemp << endl;
cout<< endl;
return 0;
}
