//P0818_Pratik Pandit Shinde                                                                          \
Q. Construct a simple C++ program to validate username and password using Class and Object:            \
If username is “user” and password is “pwd” then print "Successful" message else print "Unsuccessful".
#include<iostream>
using namespace std;
class validate
{
    public:
    char a[10],b[10];
    string x="user",y="pwd";
    void get();
    void check();
};
void validate::get()
{
    cout<<"\n enter username=";
    cin>>a;
    cout<<"\n enter password=";
    cin>>b;
}
void validate::check()
{
    if(a==x && b==y)
        cout<<"\n successful";
    else
        cout<<"\n unsucessful";
}
int main()
{
    validate v1;
    v1.get();
    v1.check();
}

//OUTPUT:                                                                                               \
enter username=user                                                                                     \
enter password=pwd                                                                                      \
successful