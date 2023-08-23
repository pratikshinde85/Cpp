/*Write a Class to represent a vector(a series of float values).Include Member function to perform the following task
1)To create a vector.
2)To modify the value of given element
3) to multiply scalar value
4)To display Vector
Use appropriate constructor where ever required
*/
//P0818 Pratik Pandit Shinde 
#include<iostream>
using namespace std;
class vector
{ public:
    float x,y,z;
     void get();
     void display();
     void modify();
     void mul();
};
    void vector:: get()
    {  
        cout<<"Enter the X value in vector:"<<endl;
        cin>>x;
        cout<<"Enter the Y value in Vector:"<<endl;
        cin>>y;
        cout<<"Enter the Z value in Vector:"<<endl;
        cin>>z;
        display();
    }
    void vector:: modify()
    {  int i;
       cout<<"\nwhat do you want to modify:""\n""1.modify in X""\n""2.Modify in Y""\n""3.Modify in Z"<<"\n";
       cin>>i;
       if(i==1)
       {
           cout<<"Enter the New in X:";
           cin>>x;
       }
       else if(i==2)
       {
          cout<<"Enter the New in Y:";
          cin>>y; 
       }
       else if(i==3)
       {
            cout<<"Enter the New in Z:";
            cin>>z;
       }
        display();
    }
    void vector:: mul()
    {
      float s;
      cout<<"\nEnter the sclar vlaue to multiplay:";
      cin>>s;
      x=x*s;
      y=y*s;
      z=z*s;
      display();
    }
     void vector:: display()
    {
    cout<<"\nEntered vector is :"<<x<<"i + "<<y<<"j + "<<z<<"k";
    }
int main()
{   vector v;
   v.get();
   v.modify();
   v.mul();
    return 0;
}
//output:
/*
Enter the X value in vector:
1.1
Enter the Y value in Vector:
2.1
Enter the Z value in Vector:
3.1

Entered vector is :1.1i + 2.1j + 3.1k
what do you want to modify:
1.modify in X
2.Modify in Y
3.Modify in Z
2
Enter the New in Y:5.1

Entered vector is :1.1i + 5.1j + 3.1k
Enter the sclar vlaue to multiplay:1.0

Entered vector is :1.1i + 5.1j + 3.1k
*/