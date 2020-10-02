// the series to print /or printing its nth term
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter nth term you want to be printed";
    cin>>n;
    int a,b;
    a=0;
    b=0;
    int p=1,c=1;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0){
           a = c;
           c++;    }
        else{
           b = p*2;
           p++;   }
    }
    if(n%2==0)
      cout<<a;
    else
      cout<<b;
    
    return 0;
}