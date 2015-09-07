//Row sum and column sum of a matrix
#include<iostream.h>
#include<conio.h>
void main()
{int m,i,j,n,a[10][10],rs[10],cs[10];
clrscr();
cout<<"Enter the dimension of the matrix ";
cin>>m>>n;
cout<<"Enter the elements of the matrix ";
for(i=0;i<m;i++)
  {  for(j=0;j<n;j++)
     cin>>a[i][j];
  }
//Rowsum

for(i=0;i<m;i++)
{rs[i]=0;
	for(j=0;j<n;j++)
		rs[i]=rs[i]+a[i][j];
}
//Columnsum
for(j=0;j<n;j++)
{cs[j]=0;
	for(i=0;i<m;i++)
		cs[j]=cs[j]+a[i][j];
}
cout<<endl<<"The rowsum is "<<endl;
for(i=0;i<m;i++)
cout<<rs[i]<<endl;
cout<<endl<<"The columnsum is "<<endl;
for(i=0;i<n;i++)
cout<<cs[i]<<endl;
getch();
}