#include<iostream>
using namespace std;

int maximum_pr(int *arr , int size)
{
   int j , k , temp=0;
   for(int j=0;j<=size-1;j++){
       for(int k=0;k<size-j-1;k++)
         {
             if(arr[k]<arr[k+1]){
               temp = arr[k];
               arr[k] = arr[k+1];
               arr[k+1] = temp; }
         }
   }
   for(k =0 ; k<size ; k++)
     cout<<arr[k]<<" ";
   cout<<"\n";

    int i , max_product=1,product=1;
    if ( size >= 4)
    {
       for(i=0;i<=size-4;i++)
       {
           
            product = arr[i]*arr[i+1]*arr[i+2]*arr[i+3];
            if(product>max_product)
               max_product = product;
             
        }
    }
    return max_product;
}

int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i =0 ; i<size ; i++)
      cin>>a[i];
    cout<<maximum_pr(a,size);
    return 0;
}