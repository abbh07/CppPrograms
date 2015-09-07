#include<iostream.h>
#include<conio.h>
void main()
{float a,b,c,avg,perc;
clrscr();
cout<<"Enter the marks in three subjects(out of 100) ";
cin>>a>>b>>c;
avg=(a+b+c)/3;
perc=(avg/100)*100;
cout<<"The average is "<<avg<<" and the percentage is "<<perc;
getch();
}