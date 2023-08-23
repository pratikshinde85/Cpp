#include<iostream>
using namespace std;
int main()
{
    int a[100],even[100],odd[100];
    int i,j=0,k=0,n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the Elements in array:"<<endl;
    for(i=0;i<n;i++)
     {  
        cout<<"Enter the array element "<<i<<" :";
        cin>>a[i];
     }
    for(i=0;i<n;i++)
     {
          if(a[i]%2==0)
          {
              even[j]=a[i];
              j++;
          }
          else
          {
              odd[k]=a[i];
              k++;
          }
     }
     cout<<"\n";
     cout<<"Entered array:"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<a[i];
        cout<<" \t";
     }
     cout<<"\n";
     cout<<"Even Array:"<<endl;
     for(i=0;i<j;i++)
     {
        cout<<even[i];
        cout<<"\t";
     }
     cout<<endl;
     cout<<"odd Array:"<<endl;
     for(i=0;i<k;i++)
     {
        cout<<odd[i];
        cout<<"\t";
     }


    return 0;
}