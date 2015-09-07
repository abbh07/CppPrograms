//Bubble sort(ascending)
#include<iostream.h>
#include<conio.h>
void main()
{int n,a[20],temp;
clrscr();
cout<<"How many elements you want to enter??";
cin>>n;
cout<<"Enter the elements ";
for(int i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{  for(int j=0;j<n-i-1;j++)
     { if(a[j]>a[j+1])
       {temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
       }
     }
}
cout<<"The sorted array is ";
for(int j=0;j<n;j++)
cout<<"  "<<a[j];
getch();
}