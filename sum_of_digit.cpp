// Can you find out the sum of the digits of a number?
// (run a loop until the number is zero and keep adding each digit)

#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter any number to find the sum of it:-";

    int number;
    cin>>number;
    int sum = 0;
    while(number!=0){
        int digit = number%10;
        number = number/10;
        sum += digit;
    }
    cout<<sum<<endl;
    return 0;
}