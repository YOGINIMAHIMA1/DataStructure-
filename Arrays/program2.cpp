/* write code for a function with void oddEven(int S[] , int N) in C++, to add 5 in all the odd values and 10 in all the even values of arrays S.

S[]   S[0]        S[1]     S[2]       S[3]    S[4]
       50         11       19       24         28
       
       
       
       60        16          24     34         38
       
       */



#include <iostream>
using namespace std;
int main()
{
  
  int N;
  cout<<"Enter the value of N:"<<endl;
  cin>>N ;
  
  int S[]= {50, 11, 19,  24, 28 };
  
  for(int i=0; i<N; i++)
  {
    if(S[i]%2==0)
    {
      S[i] =S[i]+10;
    }
    else
    {
      S[i]= S[i]+5;
    }
    
    cout<<"S[i]:"<< S[i]<<endl;
    }
  return 0;
}
