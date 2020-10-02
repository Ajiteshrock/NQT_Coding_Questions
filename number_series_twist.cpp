#include<iostream>
using namespace std;
int main()
{
    int term ,answer=0,i=0;
    cout<<"Enter the position of your choice";
    cin>>term;
    int a,b;
    a=0;
    b=0;
    for(i=3;i<=term;i++)
    {
        if(i%2==0)
            a = a + 6;
        else
            b = b + 7;
    }   

    if(term%2==0)
      cout<<a;
    else
      cout<<b;
    
    
return 0;
      
}
