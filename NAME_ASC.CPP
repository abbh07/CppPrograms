#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{char a[20],temp[20];
clrscr();
cout<<"How many names you want to enter?? "<<endl;
int n,i;
cin>>n;
cout<<"Enter the names "<<endl;
for(i=0;i<n;i++)
gets(a[i]);
for(i=0;i<n;i++)
{    if(a[i]>a[i+1])
	{temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
 }
 cout<<"The names in alphabetical order : "<<endl;
 puts(a[i]);
 getch();
 }