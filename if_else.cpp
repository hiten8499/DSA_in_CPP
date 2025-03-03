//write a program that takes an input of age
//and print if you are an dult or not
#include<bits/stdc++.h>

using namespace std;


int main(){
    int age;
    cout<<"Enter Your Age:-";
    cin>>age;
    if (age>=18)   //conditional statement to check 
    {
        cout<<"You are An Adult";
    }
    else  // if the first condition is false then this block will Execute 
    {
        cout<<"You are not An Adult";
    }
    
    
    return 0;
}