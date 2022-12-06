#include<bits/stdc++.h>
using namespace std;
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
    }
    }; S
      int main()
    {
    struct student S={120,20,89};
    cout<<S.printdetails();
  }
