/*  WAP to define a function Change(int P[], int N) in c++, which should change all the multtiples of 10 in array to 10 and rest of elements to 1
      CHANGE[]       100     43     20      56     32    91    80    40   45   21
      
      
      after modifying
                    10      1       10       1      1     1    10    10   1     1
                     */

#include <iostream>
 using namespace std;
int main()
{
  int N;
  cout<<"Enter the value of N:"<<endl;
  cin>>N;
  
  int Change[]={100,43, 20, 56, 32, 91,80,40,45,21 };
  
  for(int i=0;i<N;i++)
  {
    if(Change[i]%10==0)
      
    {
      Change[i]=10;
    }
    else
    {
      Change[i]=0;
    }
    cout<<Change[i] <<endl;
    
  }
  return 0;
}
    
   
      
      
      
      
      
    
