#include<iostream.h>
#include<conio.h>
void main()
{
int x,y=0,n,num;
clrscr();
cout<<"Enter a number ";
cin>>n;
num=n;
while(n>0)
{
x=n%10;
y=(10*y)+x;
n=n/10;
}
if(y==num)
cout<<"The number is a palindrome ";
else
cout<<"The number is not a palindrome ";
getch();
}