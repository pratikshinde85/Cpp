#include<iostream>
using namespace std;
class student
{ public:
 int roll;
 char name[19];
 int total;
 int percentage;
  void get()
  {   cout<<"Enter the Roll No:"<<endl;
      cin>>roll;
      cout<<"enter the name :"<<endl;
      cin>>name;
      cout<<"Enter the total marks:";
      cin>>total;
      cout<<"Enter the percentage:";
      cin>>percentage;
  }
  void  display();

};
void student :: display()
{
cout<<"Roll:"<<roll<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Total Marks:"<<total<<endl;
cout<<"Percentage:"<<percentage<<endl;
}
int main()
{  student s ;
   s.get();
   cout<<"Imformation that you Entered:"<<endl;
   s.display();
    return 0;
}
//output:
/*
Enter the Roll No:
1
enter the name :
Pratik
Enter the total marks:89
Enter the percentage:78
Imformation that you Entered:
Roll:1
Name:Pratik
Total Marks:89
Percentage:78
*/