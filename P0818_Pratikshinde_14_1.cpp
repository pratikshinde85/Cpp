//P0818_Pratik Pandit shinde.
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {

private:
	string name;
	int accnumber;
	char type[10];
	int amount = 0;
	int tot = 0;

public:
	
	void setvalue()
	{
		cout << "Enter name\n";
		cin.ignore();

		
		getline(cin, name);

		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> tot;
	}

	// Function to display the required data
	void showdata()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << tot << endl;
	}

	// Function to deposit the amount in ATM
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
	}

	// Function to show the balance amount
	void showbal()
	{
		tot = tot + amount;
		cout << "\nTotal balance is: " << tot;
	}

	// Function to withdraw the amount in ATM
	void withdrawl()
	{
		int a, avai_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		avai_balance = tot - a;
		cout << "Available Balance is" << avai_balance;
	}
};


int main()
{
	// Object of class
	Bank b;

	int choice;

	// Infinite while loop to choose
	// options everytime
	while (1) {
		cout << "\n**************************"
             << "**************************~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "****************************"
			<< "~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "
			<< "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;

		// Choices to select from
		switch (choice) {
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}
//
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter Your Choice
        1. Enter name, Account number, Account type
        2. Balance Enquiry
        3. Deposit Money
        4. Show Total balance
        5. Withdraw Money
        6. Cancel
1
Enter name
Pratik
Enter Account number
123
Enter Account type
saving
Enter Balance
1000

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter Your Choice
        1. Enter name, Account number, Account type
        2. Balance Enquiry
        3. Deposit Money
        4. Show Total balance
        5. Withdraw Money
        6. Cancel
2 
Name:Pratik
Account No:123
Account type:saving
Balance:1000

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter Your Choice
        1. Enter name, Account number, Account type
        2. Balance Enquiry
        3. Deposit Money
        4. Show Total balance
        5. Withdraw Money
        6. Cancel
3

Enter amount to be Deposited
1000

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter Your Choice
        1. Enter name, Account number, Account type
        2. Balance Enquiry
        3. Deposit Money
        4. Show Total balance
        5. Withdraw Money
        6. Cancel
4

Total balance is: 2000
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Enter Your Choice
        1. Enter name, Account number, Account type
        2. Balance Enquiry
        3. Deposit Money
        4. Show Total balance
        5. Withdraw Money
        6. Cancel
5
Enter amount to withdraw
500
Available Balance is1500

*/