//Function - Fibonacci series upto a given limit
#include<iostream.h>
#include<conio.h>
void fib (int);
void main()
{int x;
clrscr();
cout<<"Enter the limit ";
cin>>x;
cout<<"The fibonacci series upto the given limit is ";
fib(x);
getch();
}


void fib (int x)
{int first=0,sec=1,sum;
 for(int i=1;i<=x;i++)
 {cout<<"\t"<<first;
 sum=first+sec;
  first=sec;
  sec=sum;
  }
   }
