//Prime numbers between two limits
#include<iostream.h>
#include<conio.h>
void main()
{int x,y,prime;
clrscr();
cout<<"Enter the upper and the lower limit ";
cin>>x>>y;
if(x==1)
x++;
for(int i=x;i<=y;i++)
      {
      prime=0;
	for(int j=2;j<i;j++)
	{if(i%j==0)
	 prime=1;
	 break;
	 }

  if(prime==0)
  cout<<"\t"<<i;
       }
getch();
}