#include<bits/stdc++.h>
using namespace std;
int main()
{
  struct student
  {
    int rollno;
    int age;
    int marks;
    
    void printdetails()
    {
      cout<<"RollNo="<<rollno<<endl;
      cout<<"Age="<<age<<endl;
      cout<<"Marks="<<marks<<endl;
    }; S
    struct student S={120,20,89};
    cout<<S.printdetails();
  }
