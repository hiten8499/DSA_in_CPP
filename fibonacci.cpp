// Do you know about Fibonacci Series? The series following 1,1,2,3,5,8…, can you try to print the series upto n elements?
// Ans. (Fibonacci series can be given by Fn=Fn-1+F(n-2), where F1=1, F2=1. We need to keep track of previous two elements and when we get our next element change the value of previous variables to new ones)

#include<iostream>
using namespace std;

void fib(int n)
{
    if (n == 1) {
        cout << 1;
        return;
    }
    if (n == 2) {
        cout << 1 << " " << 1;
        return;
    }

    int a = 1, b = 1;
    cout << a << " " << b << " "; // Printing the first two Fibonacci numbers

    // Calculate and print the next Fibonacci numbers
    for (int i = 3; i <= n; ++i) {
        int next = a + b; // The next Fibonacci number
        cout << next << " ";
        a = b; // Update a to b
        b = next; // Update b to the next number
    }
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to display: ";
    cin >> n;
    fib(n);
    return 0;
}
