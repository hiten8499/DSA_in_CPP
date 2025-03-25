// Given an array of integers, sort the given array in ascending order.
// Ans. We will use a simple algorithm here. It is called Bubble Sort.

#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int arr[],int n){
    for (int i=0;i<n-1;i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                 swap(arr[j],arr[j+1]);
            }
        
        }
    }
      cout<<"----------------------------------------------------------"<<endl<<"SORTED ARRAY"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main(){
    int arr[5];

    cout<<"Enter 5 Elements of An Array :"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout<<"----------------------------------------------------------"<<endl<<"UNSORTED ARRAY"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    sort(arr,5);
    
    return 0;
}