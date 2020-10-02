#include<iostream>
#include<stdio.h>
using namespace std;


bool check(int n){
    if (n>0)
      return 1;

    else
      return 0;
}

void prime(int n){
    int i =0 , ct=0;
    if (n==1 || n==2 || n==3 )
      printf("entred number is prime");
    else
    {
    for(i=2;i*i<=n;i++)
    {
        if (n%i==0)
          ct++;
    }
    if (ct>=1)
       printf("entered number is not a prime");
    else
       printf("Yes you entere the prime");
    
    }
}

int main()
{
    int input_number;
    cout<<"Enter the Number :";
    cin>>input_number;
    if(check(input_number))
       prime(input_number);
    else{
    cout<<"enter any positive number";
    cin>>input_number;
    prime(input_number);}

return 0;
}
