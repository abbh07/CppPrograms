//Magic square
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{int m,n,a[10][10],i,j,rs[10],cs[10];
clrscr();
cout<<"Enter the dimension of the matrix "<<endl;
cin>>m>>n;
cout<<"Enter the elements of the matrix "<<endl;
for(i=0;i<m;i++)
{  for(j=0;j<n;j++)
	cin>>a[i][j];
	}
if(m!=n)
cout<<"Matrix is not square so the matrix is not a magic square "<<endl;

for(i=0;i<m;i++)
{   rs[i]=0;
	for(j=0;j<n;j++)
	rs[i]+=a[i][j];
}
for(j=0;j<n;j++)
{       cs[j]=0;
	for(i=0;i<n;i++)
	cs[j]+=a[j][i];
}
int dia1=0,dia2=0;
for(i=0;i<m;i++)
	{dia1+=a[i][i];
	dia2+=a[i][m-i-1];
	}


if(dia1==dia2==cs[j]==rs[i])
cout<<"The entered matrix is a magic square ";
else
cout<<"The entered matrix is not a magic square ";
getch();
}
