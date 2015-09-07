//To delete an element from an array
#include<iostream.h>
#include<conio.h>
void main()
{int n,a[20],pos;
clrscr();
cout<<"How many elements you want to enter?? ";
cin>>n;
cout<<"Enter the elements ";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the position of the element to be deleted ";
cin>>pos;
for(i=pos-1;i<n;i++)
a[i]=a[i+1];
n=n-1;
for(i=0;i<n;i++)
cout<<a[i]<<endl;
getch();
}