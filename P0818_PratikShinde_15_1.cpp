#include<iostream>
using namespace std;
class student
{   public :
    int roll;
    char name[10];
    int subject[5];
    int avg;
   void setvalue()
   {
    cout<<"Enter the ROLL NO:";
    cin>>roll;
    cout<<"Enter the Name:";
    cin>>name;
    int sum=0;
    for(int i=1;i<=5;i++)
    {
    cout<<"Enter the marks of subject "<<i<<":";
    cin>>subject[i];
    }
     for(int i=1;i<=5;i++)
    {
        sum=sum+subject[i];
    }
   // cout<<sum;
    avg=sum/5;
    //cout<<avg;
   }
     friend int get();
};  
int get(student s1)
{  
    return s1.avg;
}
int main()
{   student s;
    s.setvalue();
    cout<<"Average marks:"<<get(s);
    return 0;
}
//output:
/*
Enter the ROLL NO:1
Enter the Name:Pratik
Enter the marks of subject 1:90 
Enter the marks of subject 2:91
Enter the marks of subject 3:92
Enter the marks of subject 4:93
Enter the marks of subject 5:95
Average marks:92
*/