// Can you check whether a number is prime or not?
// Ans. (simple check whether all number below it can divide it or not)

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cout<<"Enter a numberto check number is prime or not";
    cin>>a;
    
    int b = 2;
    //start from b as 1 can divide any number
    bool prime = true;
    while(b!=a){
        if(a%b == 0)
            {
                prime = false;
                break;
            }
        b++;
    }
    if(prime)
    cout<<"prime";
    else cout<<"not prime";
    return 0;
}