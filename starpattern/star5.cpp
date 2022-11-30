#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=5;i<=n;i++)
  {
    for(int j=5;j>=i;j--)
    {
      cout<<j;
    }
    cout<<endl;
  }
  /* TC-O(N)
     SC- O(1)
     */
  /*
  5 
  5 4
  5 4 3
  5 4 3 2 1
  */
