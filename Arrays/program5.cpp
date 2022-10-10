 /*        0    1    2  3     4
            22   25   70  32   12
           
   modification
           25    70   32   12   22
   */

#include <iostream>
using namespace std;
int main()
{
  
  int n ,temp=0;
  cout<<"Enter the numbers :"<<endl;
  cin>>n;
  int A[]= { 22,25,70,32,12};
  for(int i=0;i<n;i++)
  {
     temp= A[i];
    A[i]=A[i+1];
    A[i-1]=temp;
    
  }
  cout<<A[i];
  return  0;
}
    
   
   
   
