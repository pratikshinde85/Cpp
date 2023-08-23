#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"Enter the number:"<<"\n";
    cin>>a;
    if(a>0)
    {
        cout<<"Number is positive....";
    }
    else
    {
        cout<<"Number is negative.....";
    }
    if(a%2==0)
    {
        cout<<"\nNumber is even....";
    }
    else
    {
        cout<<"Number is odd....";
    }



    return 0;

}