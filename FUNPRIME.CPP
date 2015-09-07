//Function - Prime number
#include<iostream.h>
#include<conio.h>
int prime(int);
void main()
{long int x;
clrscr();
cout<<"Enter a number ";
cin>>x;
if(x==2)
cout<<"The number is prime ";
if(x<=0)
cout<<"Enter natural numbers ";
if(x==1)
cout<<"One is neither prime nor composite ";
else
{
int y=prime(x);
if(y==1)
cout<<endl<<"The number is prime ";
else
cout<<endl<<"The number is not prime ";
}
getch();
}

int prime (int x)
{for(int i=2;i<x;i++)
  {if (x%i==0)
   return(0);
   else
   return(1);
   }
 }