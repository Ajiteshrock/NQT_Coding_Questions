#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;


int main(){
    int position=0;
    cin>>position;
    int answer[30] ;
    answer[1]=1;
    answer[2]=1;
    for(int i=3;i<=position;i++){
    if(i%2==0)
      answer[i] = answer[i-2] * 3;
    else
      answer[i] = answer[i-2] * 2;
    }
    
    printf("%d",answer[position]);
    return 0;
}
