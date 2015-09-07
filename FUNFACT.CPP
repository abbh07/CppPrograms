//Function- Factorial of a number
#include<iostream.h>
#include<conio.h>
int fact (int);
void main()
{ int x;
clrscr();
cout<<"Enter a number ";
cin>>x;
cout<<"The factorial of the number is ";
cout<<fact(x);
getch();
}

int fact (int x)
{int fac=1;
 for(int i=1;i<=x;i++)
 fac =fac*i;
 return(fac);
 }