/*Perfect number=sum of all positive divisors of a given number
  excluding the given number is equal to the number itself*/
#include<iostream.h>
#include<conio.h>
void main()
{int x,sum=0;
clrscr();
cout<<"Enter a number ";
cin>>x;
for(int i=1;i<x;i++)
{
	if(x%i==0)
	{
	sum=sum+i;
	}
}
cout<<endl<<sum;
if(sum==x)
cout<<endl<<"The number is perfect!!! ";
else
cout<<endl<<"The number is not perfect!!! ";
getch();
}