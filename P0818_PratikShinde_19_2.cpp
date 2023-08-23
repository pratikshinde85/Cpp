//P0818 Pratik Pandit Shinde 
#include<iostream>
using namespace std;
class Patient
{
    public:
    int HeartRate;
    double MoneyOwned;
    string name;
    public:
    Patient(int heartRate)
    {
        HeartRate=heartRate;
    }
    int getHeartRate()
    {
        return HeartRate;
    }
    void setMoneyOwned()
    {
        cout<<"\n Enter amount: ";
        cin>>MoneyOwned;
    }
    double GetMoneyOwned()
    {
        return MoneyOwned;
    }
    void setname()
    {
        cout<<"\n Enter name: ";
        cin>>name;
    }
    string getName()
    {
        return name;
    }
    ~Patient()
    {}
};
int main()
{
    Patient p1(80);
    cout<<"\n Heart Rate: "<<p1.getHeartRate();
    p1.setMoneyOwned();
    cout<<"\n Money Owned: "<<p1.GetMoneyOwned();
    p1.setname();
    cout<<"\n Name: "<<p1.getName();
    return 0;
}
//output:
/*
Heart Rate: 80
 Enter amount: 700

 Money Owned: 700
 Enter name: Pratik

 Name: Pratik
*/