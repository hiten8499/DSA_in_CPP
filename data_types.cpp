#include <bits/stdc++.h>
using namespace std;

int main(){

    //Integer DAtaType
    int x=10;

    //LongDataType
    
    long long number=7490918499;
    //We can store large number in long long data type
    
    cout<<number;

    //float,double DataType
     float a=50.69;

     
      double y=5;
        //An integer can also be stored in double output:-5
     cout<<"\n"<<"Value of Y:-"<<y<<"\n";

     //String 
      string str;
      //cin>>str;
      cout<<"Hello \t"<<str<<"\n";
  
      //if we put space between our string it will not consider as 
      //single and will store only that part which comes before space
      string str2;
      getline(cin,str2);

      cout<<str2;
           // getline function allows us to take whole line as output

        //char

        char ch='H';
        cout<<ch;
return 0;
}