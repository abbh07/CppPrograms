//To insert an element into a sorted array
#include<iostream.h>
#include<conio.h>
void main()
{int n,a[20],pos,ele;
clrscr();
cout<<"How many elements you want to enter??";
cin>>n;
cout<<"Enter the elements in sorted order (ascending order) ";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the element to be inserted ";
cin>>ele;
for(i=0;i<n;i++)
if(ele<a[i])
break;
       pos=i;

for(i=n;i>=pos;i--)
a[i]=a[i-1];
a[pos]=ele;
n=n+1;
cout<<"The array after element insertion is ";
for(i=0;i<n;i++)
cout<<"\t"<<a[i]<<"\t";
getch();
}
