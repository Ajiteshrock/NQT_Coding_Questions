#include<iostream>
using namespace std;
int main(){
     
     int year=0;
     cin>>year;
    if (year%4==0)
    {
        
        if (year%100==0 and year%400==0)
           cout<<"yes";
        else if (year%100!=0)
           cout<<"yes";
        else
           cout<<"no";
    }
    else
        cout<<"no";
return 0;
    
     

}