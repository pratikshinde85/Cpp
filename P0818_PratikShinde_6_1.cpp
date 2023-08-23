//P0818_Pratik Pandit Shinde
#include<iostream>
#include<cmath>
using namespace std;

int add(int no1,int no2)
{
    //cout<<"Addition of two number:";
    int res=no1+no2;
    return res;
}
int sub(int no1,int no2)
{
    int res=no1-no2;
    return res;
}
float mul(float no1,float no2)
{
     float res=no1*no2;
     return res;   
}
double div(double no1,double no2)
{
     float res=no1/no2;
     return res;   
}

int main()

{  float x,y;
   cout<<"Enter the first no:";
   cin>>x;
   cout<<"Enter the second no:";
   cin>>y;
    int result =add(x,y);
    float result1;
    //cout<<"What do you want do :";
    cout<<"Addition of two numbers :"<<result<<endl;
    result=sub(x,y);
    cout<<"Substraction of two number:"<<result<<endl;
    result1=mul(x,y);
    cout<<"multiplication of two number:"<<result1<<endl;
    result1=div((float)x,(float)y);
    cout<<"Division of two number:"<<result1<<endl;
    return 0;
}
//output:
/*
Enter the two no:4
5
Addition of two numbers :9
Substraction of two number:-1
multiplication of two number:20
Division of two number:0.8
*/