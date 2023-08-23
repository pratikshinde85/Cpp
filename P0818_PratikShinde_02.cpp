#include<iostream>
using namespace std;
int main()
{
    int i,count,a;
    cout<<"Prime numbers between 0 and 20 are :\n"; 
 for(i=0;i<20;i++) 
 { 
	 count=0; 
		 for(a=1;a<=i;a++) 
		 { 
 			if(i%a==0) 
             {
 				count++;
             } 
 		 } 
	 if(count==2) 
     {
	 cout<<"\t"<<i; 
     }
 } 

    return 0;
}