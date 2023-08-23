
//P0818_Pratik Pandit Shinde 

#include <iostream>
#include <cstring>

using namespace std;

int main(){

	struct student
	{
  		int roll_no;
  		string name;
		int phone_number;
	};

	struct student p1 = {1,"Brown",123443};
  	struct student p2, p3;
  	p2.roll_no = 2;
  	p2.name = "Sam";
  	p2.phone_number = 1234567822;
  	p3.roll_no = 3;
  	p3.name = "Addy";
  	p3.phone_number = 1234567844;

  	cout << "First Student" << endl;
  	cout << "roll no : " << p1.roll_no << endl;
  	cout << "name : " << p1.name << endl;
  	cout << "phone no : " << p1.phone_number << endl;
  	cout << "Second Student" << endl;
  	cout << "roll no : " << p2.roll_no << endl;
  	cout << "name : " << p2.name << endl;
  	cout << "phone no : " << p2.phone_number << endl;
  	cout << "Third Student" << endl;
  	cout << "roll no : " << p3.roll_no << endl;
  	cout << "name : " << p3.name << endl;
  	cout << "phone no : " << p3.phone_number << endl;
	return 0;
}
//output:
/*
First Student
roll no : 1
phone no : 123443
Second Student
roll no : 2
name : Sam
phone no : 1234567822
Third Student
roll no : 3
name : Addy
phone no : 1234567844
*/