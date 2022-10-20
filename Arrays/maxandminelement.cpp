#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  int arr[n],max=arr[i],min=arr[i];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=1;i<n;i++)
  {
    if( arr[i]>max)
    {
      max=arr[i];
    }
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  cout<<max<<endl;
  cout<<min<<endl;
  return 0;
}
  
