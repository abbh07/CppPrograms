//To check if a given matrix is a symmetric matrix
#include<iostream.h>
#include<conio.h>
void main()
{int m,n,i,j,a[10][10],flag=0;
clrscr();
cout<<"Enter the dimension of the matrix ";
cin>>m>>n;
if(m==n)
{cout<<"Enter the elements of the matrix ";
  for(i=0;i<m;i++)
  {  for(j=0;j<n;j++)
     cin>>a[i][j];
     }
}
else
{
cout<<"The matrix is not square ";
}

for(i=0;i<m;i++)
{  for(j=0;j<n;j++)
   {  if(a[i][j]==a[j][i])
      flag=1;
      }
}
if(flag==1)
cout<<"The matrix is symmetric ";
else
cout<<"The matrix is not symmetric ";
getch();
}