/* write aprogram  for fnction REASSIGN() WHICH  ACCEPTS AN  array of integer and its size as parameter in c++, and divides all the elements by 5, which are divisible by 5 and multiply by other elements by 2
  A[]        A[0]       A[1]    A[2]          A [3]        A [4] 
             20           12    15            60            32
             
             modification
             4           24       3           12            64
             
            */

#include <iostream>
using namespace std;
void   REASSIGN(int A[],N)
{
   cout<<"Enter the value of N:"<<endl;
  cin>>N;
  int A[]={20, 12,15,60,32};
  for(int i=0;i<n;i++)
  {
    if(A[i]%5==0)
    {
      A[i]=A[i]/5;
    }
    else
    {
      A[i]=A[i]*2;
    }
   
  };
  int main()
  {
    void REASSIGN();
    cout<<"A[i] : "<<A[i]<<endl;
    return 0 ;
  }
