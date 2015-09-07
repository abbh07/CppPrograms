//Function - Palindrome
#include<iostream.h>
#include<conio.h>
int palin (int);
void main()
{int x;
clrscr();
cout<<"Enter a number ";
cin>>x;
int z=palin(x);
if(z==1)
cout<<"The number is a palindrome ";
else
cout<<"The number is not a palindrome ";
getch();
}

int palin(int x)
{int dig,rev=0,y;
 y=x;
 while(x!=0)
 {dig=x%10;
  rev=rev*10 +dig;
  x=x/10;
  }
  if(rev==y)
  return(1);
  else
  return(0);
  }