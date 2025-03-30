// Write a C++ program that counts the number of digits in a given positive integer.

// The program should:

// Prompt the user to input a positive integer.

// Calculate and display the number of digits in the integer.

// Input:
// Enter a number: 123456
// Output:


// The number 123456 has 6 digits.

#include<iostream>

using namespace std;

int main()
{

     long long input,temp;

    cout<<"Enter the Number to COunt how many DIgits it is containing"<<endl;
    cin>>input;
    temp=input;
    int count=0;
    while (temp!=0)
    {
        temp=temp/10;
        count++;
    }
    
    cout<<endl<<input<<"   Contains "<<count<<"  Numbers";
    
    return 0;
}