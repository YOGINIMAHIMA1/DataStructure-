#include <iostream>
using namespace std;
 int main()
 {
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     for(int j=1;j<=i;j++)
     {
       cout<<j<<" ";
     }
     return 0;
   }
   /*Tc- O(n)
   SC-O(1)
   */
