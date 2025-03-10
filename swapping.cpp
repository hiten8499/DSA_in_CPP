
// Can you now swap two numbers without a third variable?
//  (use the difference and sum operation)

#include  <bits/stdc++.h>
using namespace std;
int main() {
    int number1 = 145;
    int number2 = 200;

    cout<<"Before Swapping"<<endl<<"number1:"<<"\t"<<number1<<"\t"<<"number2:"<<"\t"<<number2<<endl;
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    cout<<"After Swapping"<<endl<<"number1:"<<"\t"<<number1<<"\t"<<"number2:"<<"\t"<<number2<<endl;

    return 0;
}