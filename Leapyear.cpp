/*Check if a year is a leap year or not.
Ans. A year is a leap year iff:
The year is multiple of 400.
The year is multiple of 4 and not multiple of 100.*/

#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"Enter The Year to FIndout wether it is Leap Year or not: "<<endl;
    cin>>year;

    if (year%400==0 || (year%4==0 && year%100!=0))
    {
        cout<<"Entered Year is Leap Year";
    }
    else{
        cout<<"Entered Year is NOt Leap Year";
    }
    return 0;
}