#include<iostream>
using namespace std;
class A
{
    public :
    int a=10,b=20;
    friend class B;
};
class B
{
    public:
    int temp;
   a=temp;
   b=a;
   b=temp;


};

int main()
{
    return 0;
}