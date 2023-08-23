#include<iostream>
using namespace std;
int main()
{   int rc;
    int i,j,a[100][100];
   
   cout<<"Enter the number of Rows and columns you want:\n";
   cin>>rc;
   
   for(i=0; i<rc; i++)
    {
      for(j=0;j<rc;j++)
         {
            cout<<"Enter the ["<<i<<"]["<<j<<"]Element";
            cin>>a[i][j];
         }
    }
    cout<<"Matrix is :"<<endl;
     for(i=0; i<rc; i++)
    {
         for(j=0;j<rc;j++)
         {
             cout<<a[i][j]<<"  ";
         }
         cout<<endl;
    }
    cout << "Diagonal Elements: \n";
    cout<<"\nFIRST DIAGONAL: ";
        for(i=0;i<rc; i++)
        {
           cout<<a[i][i]<<"  ";
        }
    cout<<"\nSECOND DIAGONAL: ";
        for(i=0,j=rc-1 ;i<rc;i++,j--)
        {
           cout<<a[i][j]<<"  ";
        }
     return 0;

}
//output:
/*
//P0818_Pratik Pandit Shinde                                                                          \
Enter the number of Rows and columns you want:
4
Enter the [0][0]Element1
Enter the [0][1]Element2
Enter the [0][2]Element3
Enter the [0][3]Element4
Enter the [1][0]Element5
Enter the [1][1]Element6
Enter the [1][2]Element7
Enter the [1][3]Element8
Enter the [2][0]Element9
Enter the [2][1]Element10
Enter the [2][2]Element11
Enter the [2][3]Element12
Enter the [3][0]Element13
Enter the [3][1]Element14
Enter the [3][2]Element15
Enter the [3][3]Element16
Matrix is :
1  2  3  4
5  6  7  8
9  10  11  12
13  14  15  16
*/