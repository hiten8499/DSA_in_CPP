// Now when you know to reverse a number, can you try to check whether a number is a palindrome or not?
// Ans. (Palindrome is a number which when reversed we get the same value)

#include <bits/stdc++.h>
using namespace std;
int reverse(int a){
    int res = 0;
    while(a!=0){
        int dig = a%10;
        res = res*10 + dig;
        a =a/10;
    }
    return res;
}
int main() {
    int a;
    cout<<"Enter  Any Number to check :-"<<endl;
    cin>>a;
    cout<<"Entered Number :-"<<a<<endl;
    int b = reverse(a);


    if(a == b)
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
    return 0;
}