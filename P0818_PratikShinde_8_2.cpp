//P0818_Pratik Pandit Shinde 
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
int a[10], n, i,*p, flag=0, x;
cout<<"Enter no. of array elements \n";
cin>>n;
cout<<"Enter the array elements \n";
for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
cout<<"Enter the key element \n";
cin>>x;
p=a;
for(i=0;i<n;i++)
{
 if(*(p+i)==x)
    {
    flag=1;
    cout<<x<<" is found at location "<<i+1<<endl;
    break;
   }
}
if(flag==0)
    {
    cout<<x<<"is not found \n";
    }

return 0;
}
//output:
/*
Enter no. of array elements 
4
Enter the array elements 
5
87
45
65
Enter the key element 
5
5 is found at location 1
*/