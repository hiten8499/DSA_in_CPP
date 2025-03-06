#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[5];
    int sum=0;
    cout<<"Enter 5 elements of An Array";
     for (int i = 0; i < 5; i++)
     {
        cin>>arr[i];
     }
     
    cout<<"Array Elements"<<"\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    for (int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"Sum of An Array is:-"<<sum;
    return 0;
}