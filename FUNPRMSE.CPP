//Function - Prime series
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void prime (int,int);
void main()
{int l,u;
clrscr();
cout<<"Enter the lower limit ";
cin>>l;
cout<<"Enter the upper limit ";
cin>>u;
if(l<=1)
cout<<"Enter natural numbers as lower limit ";
prime(l,u);
getch();
}

void prime (int l,int u)
{int flag;
for(int i=l;i<=u;i++)
 {	for (int j=2;j<i;j++)
	{ if(i%j==0)
	 {flag=0;
	 break;}
	 else
	 flag=1;
	 }

  if(flag==1)
  cout<<endl<<'\t'<<i;
  }
  }
