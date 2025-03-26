//Find the Size of given input 

#include<iostream>

using namespace std;

int main()
{
    int  input;
    string input1;
    cout<<"Enter the Integer to find the size:-"<<endl;
    cin>> input;

    cout<<endl<<"Size Occupied by Number :-"<<sizeof(input)<<"bytes";

    cout<<endl<<"Enter String to find the size:-";
    cin>>input1;
    cout<<endl<<"Size Occupied by Number :-"<<sizeof(input1)<<"bytes";

    return 0;
}