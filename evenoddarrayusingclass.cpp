#include<iostream>
using namespace std;
class Array1
{
    public:
    int i,j=0,k=0,n;
    int a[100],odd[100],even[100];
    void get();
    void display();
};
void Array1 :: get()
{ // int n;
   cout<<"Enter the Array size:";
   cin>>n;   
   cout<<"Enter the Array Elements:";
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
}
void Array1 :: display()
{
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

}
int main()
{   Array1 a1;
    a1.get();
    a1.display();
    return 0;
}