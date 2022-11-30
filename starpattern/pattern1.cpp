#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int i=1;i<=n;i++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}
                



/*time complexity- O(n)
 space complexity-O(1)
 O/P
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
