//P0818_PratikShinde 
#include<iostream>
#include<cstring>

using namespace std;
struct student
{
  int roll_no;
  string name;
  int marks;
};

int main()
{
   struct student stud;
        cout<<"Enter the student details:\n";
		cout<<"Enter roll no:"<<endl;
		cin >> stud.roll_no;
		cout << "Enter name :" << endl;
		cin >> stud.name;
        cout<<"Marks of student:"<<endl;
        cin>>stud.marks;
		
	

        cout << "Student details that you have Entered: "<<endl;
		cout << "Roll no : " << stud.roll_no << endl;
		cout << "Name : " << stud.name << endl;
		cout<<"Marks of student:"<<stud.marks<<endl;
	
	return 0;
}
/*output:
Enter the student details:
Enter roll no:
1
Enter name :
Pratik
Marks of student:
93   
Student details that you have Entered: 
Roll no : 1
Name : Pratik
Marks of student:93
*/
