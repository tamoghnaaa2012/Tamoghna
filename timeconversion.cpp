//include library
#include<iostream>
using namespace std;
// declare the main function
int main()
//the process begins
{
//declare required variables
int day,year,week,days;
/*day is number of day to be input by user
year is number of years
week is number of week remaining
days is the number of days remaining*/
cout<< " convert day into year,week and days"<<endl;
cin>> day;
year =day/365;
day =day%365;
week =day/7;
days =day%7;
cout<< "/nyears: "<<year<<"/nweeks: "<<week<<"/ndays: "<<days << endl;
cout<< endl;
return 0;
}

