#include<iostream.h>
#include<conio.h>
void main()
{int x,y,z,a,b,c,d;
float sum,w;
clrscr();
cout<<"Enter the denominations of 20 ,10, 5 and  50 paisa ";
cin>>a>>b>>c>>d;
x=20*a;
y=10*b;
z=5*c;
w=.50*d;
sum=x+y+z+w;
cout<<"The total money in piggy bank is "<<sum;
getch();
}