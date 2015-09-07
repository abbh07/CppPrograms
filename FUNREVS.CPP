//Function - Reversing a number
#include<iostream.h>
#include<conio.h>
int rev (int);
void main()
{int x;
clrscr();
cout<<"Enter a number ";
cin>>x;
cout<<"The reversed number is "<<endl<<rev(x);
getch();
}


int rev (int x)
{int dig,sum=0;
 while(x!=0)
 {dig=x%10;
  sum=(10*sum)+dig;
  x=x/10;
  }
  return(sum);
  }