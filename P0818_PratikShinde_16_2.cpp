//P0818_Pratik Pandit Shinde 

#include<iostream>
using namespace std;
class DM
{
    private:
    float m,cm;
    public:
    void getdata1()
    {
        cout<<"\n Enter metres: ";
        cin>>m;
        cout<<"\n Enter centimetres: ";
        cin>>cm;
        cm=cm/100;
    }
    friend class DB;
};
class DB
{
    public:
    float f,i;
    public:
    void getdata2()
    {
        cout<<"\n Enter feet: ";
        cin>>f;
        cout<<"\n enter inches: ";
        cin>>i;
        i=i*0.83;
    }
    void addition(DM ob)
    {
        float ft,in;
        ft=(ob.m*3.28)+f;
        in=(ob.cm*0.39)+i;
        cout<<"\n Addition: "<<ft<<" feet   "<<in<<" inches";
    }
};
int main()
{
    DM metre;
    DB feet;
    metre.getdata1();
    feet.getdata2();
    feet.addition(metre);
    return 0;
}
//output:
/*
 Enter metres: 5

 Enter centimetres: 8

 Enter feet: 4

 enter inches: 5

 Addition: 20.4 feet   4.1812 inches
*/