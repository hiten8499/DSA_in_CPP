// Find the factorial of a number.
// Ans. (Factorial of n = 12345…(n-1) n, multiply all number below given numbers)

#include <iostream>
using namespace std;
int factorial(int n){
    int res = 1;
    for(int i = 2;i<=n;i++)
        res = res*i;
    return res;
}
int main() {
    int a;
    cout<<"Enter a Number to Find its Factorial:-"<<endl;
    cin>>a;
    cout<<"Factorial of "<<a<<" :"<<factorial(a)<<endl;
    return 0;
}