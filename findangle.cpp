//include library
#include<iostream>
using namespace std;
// declare the main function
int main()
//the process begins
{
//declare required variables
int ang1,ang2,ang3;
/*ang1 is angle to be input by user
ang2 is angle to be input by user
ang3 is angle needed to calculate*/
cout<< "Find the third angle of a triangle"<<endl;
cout<< "Input the 1st angle of a triangle"<<endl;
cin>>ang1;
cout<< "Input the 2nd angle of a triangle"<<endl;
cin>>ang2;
ang3 =(180-(ang1+ang2));
cout << "The 3rd of the triange is: "<< ang3 << endl;
cout<< endl;
return 0;
}
