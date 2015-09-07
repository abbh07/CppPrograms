//Matrix addition
#include<iostream.h>
#include<conio.h>
void main()
{int m,n,p,q,a[10][10],b[10][10],c[10][10];
clrscr();
cout<<"Enter the dimension for the first matrix ";
cin>>m>>n;
cout<<"Enter the dimension for the second matrix ";
cin>>p>>q;
cout<<"Enter the elements of first matrix ";
for(int i=0;i<m;i++)
 { for(int j=0;j<n;j++)
   cin>>a[i][j];
 }
cout<<"Enter the elements of the second matrix ";
for(i=0;i<p;i++)
{  for(int j=0;j<q;j++)
   cin>>b[i][j];
}
if(m==p&&n==q)
{ for(i=0;i<m;i++)
  {  for(int j=0;j<n;j++)
     c[i][j]=a[i][j]+b[i][j];
  }
}
else
cout<<"Addition not possible "<<endl;
cout<<"The sum of the matrices is "<<endl;
for(i=0;i<m;i++)
{  for(int j=0;j<n;j++)
   cout<<"\t"<<c[i][j]<<endl;
}
getch();
}