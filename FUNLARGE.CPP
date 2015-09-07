//Function - 1D - Largest of n numbers
#include<iostream.h>
#include<conio.h>
void lar (int a[],int);
void main()
{int a[20],x;
clrscr();
cout<<"How many elements you want to enter?? ";
cin>>x;
cout<<endl<<"Enter the elements ";
for(int i=0;i<x;i++)
cin>>a[i];
lar(a,x);
getch();
}

void lar (int a[],int x)
{int l=a[0];
 for(int i=0;i<x;i++)
 {
  if(a[i]>a[0])
  l=a[i];
  }
  cout<<"The largest number is ";
  cout<<endl<<l;
  }
