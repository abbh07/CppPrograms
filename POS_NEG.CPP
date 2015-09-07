#include<iostream.h>
#include<conio.h>
void main()
{float x;
clrscr();
cout<<"Enter any number ";
cin>>x;
if(x==0)
cout<<"The number is zero ";
else
{
if(x>0)
cout<<"The number is positive ";
else
cout<<"The number is negative ";
}
getch();
}