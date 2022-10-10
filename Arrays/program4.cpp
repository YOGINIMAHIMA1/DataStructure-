/*  Write a definition of a function Modify(int A[], int N0 in C++, which should reposition the content after swapping each element pait of number in it

A[]           A[0]          A[1]        A[2]       A[3]        A[4]        A[5]        A[6]        A[7]
               86            93          40        36           52          21         70             10
               
               40            36          86        93           70          10          52              21 */




#include <iostream>
using namespace std ;
int main()
{
    int N, temp=0;
  cout<<"Enter the value of N:<<endl;
    cin>>N;
  int A[]= { 86, 93, 40,36, 52,21,70,10};
  for(int i=0;i<N;i++)
  {
    temp= A[i]+2;
    A[i]=temp;
  }
  cout<<"A[i] :"<<A[i]<<endl;
  return 0;
}
