#include<iostream.h>
#include<conio.h>
void main()
{int h,m,s,t;
clrscr();
cout<<"Enter the time in seconds ";
cin>>t;
h=t/3600;
m=(t/10)/60;
s=(t/10)%60;
cout<<"Hours = "<<h<<" Minutes = "<<m<<" Seconds = "<<s;
getch();
}