/* write a code for function void EvenOdd(int N, int C) in c++, to add 1 in all the odd values and 2 in all even values of the array T.

   T[]            T[0]          T[1]         T[2]          T[3]     T[4]
                   35             12              16        69      26
                   
                   modification
                   36              14          18           70        28  
                   */

#include <iostream>
using namespace std;
int main()
{
  
  int N;
  cout<<"Enter the value of n:"<<endl;
  cin>>N;
  int arr[]={35 ,12,  16,  69,26};
  for(int i=0; i<N; i++)
  {
    if(T[i]%2==0)
    {
      T[i] =T[i]+2;
    }
    else
    {
      T[i] =T[i]+1;
    }
    cout<<"T[i] :"<<T[i]<<endl;
  }
  return 0;
}
