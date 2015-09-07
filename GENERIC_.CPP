/*Generic root is the sum of digits of a number until a single digit
  is obtained*/
#include<iostream.h>
#include<conio.h>
void main()
{int x,y,sum=0;
clrscr();
cout<<"Enter a number ";
cin>>x;
while(x>=10)
{
while(x!=0)
{
	y=x%10;
	x=x/10;
	sum=sum+y;
}
	x=sum;
 }

 cout<<"The generic root of the number is "<<sum;
 getch();
 }