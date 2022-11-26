#include <iostream>
using namespace std;
 int main()
 {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   int counter=1;
   while(counter<n-1)
   {
     for(int j=0;j<n-counter;j++)
     {
       if(arr[i]>arr[j)
                     {
                       int temp=arr[j];
                       arr[j]=arr[i];
                       arr[i]=temp;
                     }
                     
                     
                     }
                     counter++;
                     }
                     for(int i=0;i<n;i++)
                     {
                       cout<<arr[i]<<" ";
                     }
                     return 0;
                     }
