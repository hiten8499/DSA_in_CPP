#include<iostream>
using namespace std;
int sumofcubes(int n){
    int res = 0;
    while(n!=0)
        {
            int dig = n%10;
            res = res + (dig*dig*dig);
            n = n/10;
        }
    return res;
}
int main() {
    int a = 371;
    if(a == sumofcubes(a))
        cout<<"Armstrong Number";
    else cout<<"Not Armstrong Number";
    return 0;
}