//P0818 Pratik Pandit Shinde 
 
#include<iostream>
#include<string>
using namespace std;
  
int main()
 {
   int *ptr = NULL;
   ptr = new int();
   int *var = new int(12);
  
   if(!ptr)
   {
        cout<<"bad memory allocation"<<endl;
    }
   else
  {
       cout<<"memory allocated successfully"<<endl;
       *ptr = 10;
       cout<<"*ptr = "<<*ptr<<endl;
       cout<<"*var = "<<*var<<endl;
}
  
double *myarray = NULL;
myarray = new double[10];
if(!myarray)
 {cout<<"memory not allocated"<<endl;}
else
   {
     for(int i=0;i<10;i++)
       myarray[i] = i+1;
       cout<<"myarray values : ";
     for(int i=0;i<10;i++)
       cout<<myarray[i]<<"\t";
   }
delete ptr;
delete var;
delete[] myarray;
  
return 0;
 }
//output:
/*
memory allocated successfully
*ptr = 10
*var = 12
myarray values : 1      2       3       4       5       6       7       8       9       10
*/