//Find the maximum number in an array of integers.

#include<iostream>
 using namespace std;
int main() {
    int arr[5] = { 12, 52, 55, 84, 3 };
    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    for(int i = 0;i<5;i++)
        {
            if(max < arr[i])
                 max = arr[i];
        }
    cout<<max<<endl;
    return 0;
}
