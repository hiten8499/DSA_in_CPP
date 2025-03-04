/* school has following rules for gradind system
 25 to 44 -F
 25 to 49 -E
 45 to 49 -D
 50 to 59 -C
 60 to 79 -B
 80 to 100-A

 Ask user to enter marks and print the corresponding grade */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m1, m2, m3, m4;

    cout << "Enter Marks:-";
    cin >> m1;
    cout << "Enter Marks:-";
    cin >> m2;
    cout << "Enter Marks:-";
    cin >> m3;
    cout << "Enter Marks:-";
    cin >> m4;

    cout << "Sub1:" << m1 << "\n";
    cout << "Sub2:" << m2 << "\n";
    cout << "Sub3:" << m3 << "\n";
    cout << "Sub4:" << m4 << "\n";

    int total = m1 + m2 + m3 + m4;
    cout << "Total Marks:-" << total;

    float per = total / 4;
    cout << "\n"
         << "Percentage Obtained:-" << per;

    char grade;

    if (per > 45 && per <= 49)
    {
        grade = 'E';
    }
    else if (per > 49 && per <= 59)
    {
        grade = 'D';
    }
    else if (per > 59 && per <= 69)
    {
        grade = 'C';
    }
    else if (per > 69 && per <= 79)
    {
        grade = 'B';
    }
    else if (per > 79 && per <= 100)
    {
        grade = 'A';
    }
    else
    {
        grade = 'F';
    }

    cout << "\n" << "Grade:" << grade;

    return 0;
}