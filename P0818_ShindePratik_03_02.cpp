#include<iostream>

using namespace std;

int main()
{
    int n, array[10];
    cout<<"\n Enter the Number of Element you want"<<endl;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<"\n Enter the Element ";
        cin>>array[i];
    }
       for(int i=n-1; i>0; i--)
    {
         if(i%2==1)
             cout<<array[i];
    }
 
    return 0;
    
}
//output:

/*
 Enter the Number of Element you want
5

 Enter the Element 1

 Enter the Element 2

 Enter the Element 3

 Enter the Element 4

 Enter the Element 5
42
*/