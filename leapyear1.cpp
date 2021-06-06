//check the given year is leap year or not
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the Year \n";
    cin>>year;
    //takin a year from user
    //now check the condition
    //if year divided by 4 gives remainder 0 then it will be leap year
    // to check remainder of two numbers we use this % symbol 
    if(year % 4 == 0)
    {
    	cout<<"It is a Leap Year";
    }
    //if not print not a leap year
    else
    {
    	cout<<"Not a leap Year";
    }
	return 0;
	//lets complie and run...
	//now lets run in cmd
}