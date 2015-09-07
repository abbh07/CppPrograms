//To insert an element to an array at a given position
#include<iostream.h>
#include<conio.h>
void main()
{int n,a[20],ele,pos;
clrscr();
cout<<"How many elements you want to enter?? ";
cin>>n;
cout<<"Enter the elements of the array ";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the element and the position of insertion ";
cin>>ele>>pos;
for(i=n;i>=pos;i--)
{
  a[i]=a[i-1];
}
  a[pos-1]=ele;

    n=n+1;

cout<<"The array after insertion is ";
for(i=0;i<n;i++)
cout<<"\t"<<a[i];
getch();
}
