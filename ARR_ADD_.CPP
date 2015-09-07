//1D array addition
#include<iostream.h>
#include<conio.h>
void main()
{int x,a[20],b[20],c[20];
clrscr();
cout<<"How many elements you want to enter?? ";
cin>>x;
cout<<"Enter the elements of the first array ";
for(int i=0;i<x;i++)
cin>>a[i];
cout<<"Enter the elements of the second array ";
for(i=0;i<x;i++)
cin>>b[i];
for(i=0;i<x;i++)
c[i]=a[i]+b[i];
cout<<"The addition of the arrays is ";
for(i=0;i<x;i++)
cout<<c[i]<<'\t';
getch();
}
