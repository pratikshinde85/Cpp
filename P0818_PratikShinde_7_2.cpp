
//P0818_Pratik Pandit Shinde 
#include<iostream>
using namespace std;
class Swap
{
float m=50.2;
float n=100.1;  
int a=10,b=20;
int temp1,temp2;
    public :
    void get();
    void display(int ,int );
    void display(float ,float);

};
void Swap ::get( )
{
 
 cout<<"before swaping a and b number are:"<<"\n"<<a<<endl<<b;
 display(a,b);
 
 cout<<"\nbefore swaping m and n number are:"<<"\n"<<m<<endl<<n;
 display(m,n);
}
void Swap::display(int a,int b)
{
    temp1=a;
    a=b;
    b=temp1;
    cout<<"\nafter swaping a and b are: "<<"\n"<<a<<endl<<b;
}
void Swap::display(float m ,float n)
{
    temp2=m;
    m=n;
    n=temp2;
    cout<<"\nafter swaping m and n no are:"<<"\n"<<m<<endl<<n;
}
int main()
{
    Swap s;
    s.get();
return 0;
}
//output:
/*
before swaping a and b number are:
10
20
after swaping a and b are:
20
10
before swaping m and n number are:
50.1
100.1
after swaping m and n no are:
100.1
50
*/