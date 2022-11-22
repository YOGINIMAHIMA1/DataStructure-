
/* time complexity-O(n)
 space complexity-O(1)
 */


#include <iostream>
using namespace std;
 int main()
 {
   
   int n,ele,found=0;
   int arr[n];
   cin>>n>>ele;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
     if(arr[i]==ele)
     {
       cout<<"found at location :"<<i;
     }
   }
   if(!found)
   {
     cout<<"Not found";
   }
   return 0;
 }
