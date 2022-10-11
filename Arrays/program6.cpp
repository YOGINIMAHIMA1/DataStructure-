/* wap in C++, which accepts an array of integer and its size as parameters and divide all those array elements by 7 which are divisible by 7 and multiply other array elements by 7

A[]         A[0]         A[1]       A[2]     A[3]        A[4]
            21              12      35         42            18
            
            modifying
            3              36         5         6               54


*/

#include <iostream>
using namespace std;
int main()
{
  
  int N;
  cout<<"Enter the value of N:"<<endl;
  cin>>N;
   int Arr[] ={ 21 ,  12,   35,  42, 18};
  
  for(int i=0; i<N; i++)
  {
    
    if(Arr[i] %7==0)
    {
      Arr[i]= Arr[i]/7;
    }
    else
    {
      Arr[i]= Arr[i] *3 ;
      }
    cout<<"Arr[i]"<<Arr[i]<<endl;
  }
  return 0;
}
