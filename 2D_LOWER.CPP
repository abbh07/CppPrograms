//To check if a matrix is lower triangular
#include<iostream.h>
#include<conio.h>
void main()
{int m,n,a[10][10];
 clrscr();
 cout<<"Enter the dimension of the matrix "<<endl;
 cin>>m>>n;
 cout<<"Enter the elements of the matrix "<<endl;
 int i,j;
 for(i=0;i<m;i++)
 {  for(j=0;j<n;j++)
	cin>>a[i][j];
	}
 int flag=0;
 for(i=0;i<m;i++)
 {    for(j=0;j<n;j++)
	{    if(i<j && a[i][j]==0)
	      flag=1;
	      }
 }
 if(flag==1)
 cout<<"The matrix is lower triangular ";
 else
 cout<<"The matrix is not lower triangular ";
 getch();
 }