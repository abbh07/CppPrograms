#include<iostream.h>
#include<conio.h>
void main()
{float x,y,z;
clrscr();
cout<<"Enter any three numbers ";
cin>>x>>y>>z;
if(x>y)
  {if(x>z)
  cout<<"The greatest number is "<<x;}
else
{if(y>z)
cout<<"The greatest number is "<<y;
else
cout<<"The greatest number is "<<z;}
getch();}