//P0818_Pratik Pandit Shinde 
#include<iostream>
//#include<conio.h>
using namespace std;

class complex
 {
    public:
    int a, b, c;
    void getvalue() 
    {
        cout<< "Enter the Two Numbers:";
        cin>>a>>b;
    }

    void operator++() 
    {
        a = ++a;
        b = ++b;
    }

    void operator--() {
        a = --a;
        b = --b;
    }

    void display() {
        cout<< a << "+\t" << b << "i" <<endl;
    }
};

int main() {
    
    complex obj;
    obj.getvalue();
    ++obj;
    cout << "Increment Complex Number\n";
    obj.display();
    --obj;
    cout << "Decrement Complex Number\n";
    obj.display();
   
    return 0;
}
//out[ut:
/*
Enter the Two Numbers:2
3
Increment Complex Number
3+      4i
Decrement Complex Number
2+      3i
*/