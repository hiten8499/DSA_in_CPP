// Write a program to find the reverse of a number.
// Ans. (try to get each digit and multiply with its corresponding power of 10)

#include <bits/stdc++.h>
using namespace std;
int main() {

    int a;
    cout<<"enter a number to Reverse it ";
    cin>>a;
    if (a>9)
    {
    
    int res = 0;
    while(a!=0){
        int dig = a%10;
        res = res*10 + dig;
        a =a/10;
    }
    cout<<res;
    return 0;
    }
    else
    {
        cout<<"Number Must be Greater than 9";
    }
    
}
