//  Write a C++ program that reads an integer n from the user and generates the following pattern of stars:

// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main(){

    int input;

    cout<<"Enter A number to Print Pattern:"<<endl;
    cin>>input;

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}