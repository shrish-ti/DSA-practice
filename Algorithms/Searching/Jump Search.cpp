#include <bits/stdc++.h>
using namespace std;
int jump(int arr[],int k,int size)
{
int step=sqrt(size);
int n=size;
 // int step=sqrt(sizeof(arr)/sizeof(arr[0])); Cannot use this - array is decayed to a pointer when passed to a function; compute it before passing through function 
 for(int i=0; i<n; i=i+step)
 {
   if(arr[i]>=k)
   {
   for(int j=i-step; j<=i+step; j++)
   {
     if(arr[j]==k)
     return j;
   }
   }
  }
  return -1;
}

int main()
{
int arr[10]={1,5,9,11,15,19,20,22, 25, 30};
int res=jump(arr,25,10);
cout<<res<<endl;
}
