#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int year;
cout<<"Enter a year - ";
cin>>year;
if(year%4==0)
cout<<"\n The year is leap";
else
cout<<"\n The year is non leap";
getch();
}