//Trace and norm of a matrix
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{int a[10][10],m,n,tr=0,sum=0,i,j;
clrscr();
cout<<"Enter the order of the matrix ";
cin>>m>>n;
cout<<"Enter the elements of the matrix ";
for(i=0;i<m;i++)
{  for(j=0;j<n;j++)
	cin>>a[i][j];
	}

for(i=0;i<m;i++)
{
	tr=tr+a[i][i];
	}

for(i=0;i<m;i++)
{  for(j=0;j<n;j++)
	sum=sum+a[i][j]*a[i][j];
	}

cout<<"The norm of the matrix is "<<sqrt(sum)<<endl;
cout<<"The trace of the matrix is "<<tr<<endl;
getch();
}
