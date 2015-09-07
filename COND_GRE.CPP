#include<iostream.h>
#include<conio.h>
void main()
{float a,b,c;
clrscr();
cout<<"Enter any three numbers ";
cin>>a>>b>>c;
(a>b?(a>c?cout<<"The largest number is "<<a:cout<<"The largest number is "<<c)
:(b>c?cout<<"The largest number is "<<b:cout<<"The largest number is "<<c));
getch();
}