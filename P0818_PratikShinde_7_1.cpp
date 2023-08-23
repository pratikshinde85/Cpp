//P0818_Pratik Pandit Shinde
#include<iostream>
using namespace std;
int display(char n[],char c[],char s[],char a[],char *country="India")
{   
    cout<<"Name of person:"<<n<<endl;
    cout<<"Name of City:"<<c<<endl;
    cout<<"Name of State:"<<s<<endl;
    cout<<"Address:"<<a<<endl;
    cout<<"Country name :"<<country<<endl;
    return 0;
    }
int main()
{   char name[20],city[20],state[20],address[20];
    cout<<"Enter your Name :";
    cin>>name;
    cout<<"Enter the city:";
    cin>>city;
    cout<<"Enter the state:";
    cin>>state;
    cout<<"Enter the address:";
    cin>>address;
    display(name,city,state,address);
return 0;
}
//output:
/*
Enter your Name :Pratik
Enter the city:Pune 
Enter the state:Maharashtra 
Enter the address:dhayari
Name of person:Pratik
Name of City:Pune
Name of State:Maharashtra
Address:dhayari
Country name :India
*/