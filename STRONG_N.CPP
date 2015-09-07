/*Strong number=Positive number whose sum of factorial of its
  digits is equal to the number itself*/
#include<iostream.h>
#include<conio.h>
int fact (int);
void main()
{int x,y,a,sum=0;
clrscr();
cout<<"Enter a number ";
cin>>x;
a=x;
while(x>0)
{
	y=x%10;
	x=x/10;
	sum=sum+fact(y);
}
if(sum==a)
cout<<"The number is strong!!! ";
else
cout<<"The number is not strong!!! ";
getch();
}
int fact (int m)
{ int fac=1,n;
 n=m;
 while(n>0)
 {fac=fac*n;
 n--;
 }
 return(fac);
 }


