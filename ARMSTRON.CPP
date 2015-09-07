//sum of the cubes of the digits of the number is the number itself
//Armstrong number
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{int a,x,y,z=0;
clrscr();
cout<<"Enter a number ";
cin>>x;
a=x;
while(x!=0)
{y=x%10;
x=x/10;
z=z+pow(y,3);
}
if(z==a)
cout<<"The number is armstrong ";
else
cout<<"The number is not armstrong " ;
getch();
}
