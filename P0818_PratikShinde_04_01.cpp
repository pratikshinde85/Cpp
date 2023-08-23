//P0818_PratikShinde 
#include<iostream>
#include<cstring>

using namespace std;

struct student
{
  int roll_no;
  string name;
};

int main(){

	struct student stud[3];
  	int i;

	for(i=0; i<3; i++)
    {                   		
		cout << "Student " << i + 1 << endl;
		cout << "Enter roll no" << endl;
		cin >> stud[i].roll_no;
		cout << "Enter name" << endl;
		cin >> stud[i].name;
		
	}

	for(i=0; i<3; i++)
    {							
		cout << "Student " << i + 1 << endl;
		cout << "Roll no : " << stud[i].roll_no << endl;
		cout << "Name : " << stud[i].name << endl;
		
	}
	return 0;
}

/*
output:
Student 1
Enter roll no
1
Enter name
pratik
Student 2
Enter roll no
2
Enter name
rakesh
Student 3
3
Enter name
rohan
Student 1
Roll no : 1
Name : pratik
Student 2
Roll no : 2
Name : rakesh
Student 3
Roll no : 3
Name : rohan
*/