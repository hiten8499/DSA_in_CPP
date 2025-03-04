/*Take the age from user and then decicde accordingly

1. if age<18
     not Eligible for Job
     if age>=18 
     print eleigible for job
     if age>=55 ange age<=57
     eligible for job but retirement soon
     if age>57
     retiremrnt time */

    #include <bits/stdc++.h>
    using namespace std;

    int main(){

        int age;

        cout<<"Enter YOur Age:-";
        cin>>age;
        if (age<18)
        {
            cout<<"You are not Eligible for Job";
        }
        else if (age>18 && age<55)
        {
            cout<<"Eligible For Job";
        }
        else if (age>=55 && age<57)
        {
            cout<<"Eligible for Job but Retiremnet soon";
        }
        else{
            cout<<"Retirement Time";
        }
        
        
        return 0;
    }