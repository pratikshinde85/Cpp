//P0818_Pratik Pandit Shinde  
#include<iostream>
#include<cmath>
using namespace std;
struct complex
{
    int real1,real2;
    int img1,img2;
};
void addition(complex &cn )
{
cout<<"\nThe sum of the two complex numbers:\n";
cout<<cn.real1+cn.real2<<"+"<<cn.img1+cn.img2<<"i";
}
void substraction(complex &cn )
{
cout<<"\nThe substraction of the two complex numbers:\n";
cout<<cn.real1-cn.real2<<"+"<<cn.img1-cn.img2<<"i";
}
void multiplication(complex &cn )
{
cout<<"\nThe multiplication of the two complex numbers:\n";
cout<<cn.real1*cn.real2<<"+"<<cn.img1*cn.img2<<"i";
}
void division(complex &cn )
{
cout<<"\nThe division of the two complex numbers:\n";
cout<<cn.real1/cn.real2<<"+"<<cn.img1/cn.img2<<"i";
}

int main()
{
complex cn ;
cout<<"Enter the real and imaginary value of the first complex number\n" ;
cin >> cn.real1 >> cn.img1 ;
//cin.ignore( ) ;
cout<<"\nEnter the real and imaginary value of the second complex number\n";
cin>>cn.real2>>cn.img2 ;
//cin.ignore( ) ;
addition(cn); 
substraction(cn); 
multiplication(cn); 
division(cn);
 
    return 0;
}
//output:
/*
Enter the real and imaginary value of the first complex number
6
6

Enter the real and imaginary value of the second complex number
3 
3

The sum of the two complex numbers:
9+9i
The substraction of the two complex numbers:
3+3i
The multiplication of the two complex numbers:
18+18i
The division of the two complex numbers:
2+2i

*/