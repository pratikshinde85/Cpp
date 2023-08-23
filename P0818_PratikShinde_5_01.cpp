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
{
    int result =add(10,20);
    float result1;
    cout<<"Addition of two numbers :"<<result<<endl;
    result=sub(20,10);
    cout<<"Substraction of two number:"<<result<<endl;
    result1=mul(5.5,5.5);
    cout<<"multiplication of two number:"<<result1<<endl;
    result1=div(102.1,2.2);
    cout<<"Division of two number:"<<result1<<endl;
    return 0;
}
//output:
/*
Addition of two numbers :30
Substraction of two number:10
multiplication of two number:30.25
Division of two number:46.4091
*/