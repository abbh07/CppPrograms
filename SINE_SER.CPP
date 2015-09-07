#include<iostream.h>
#include<conio.h>
#include<math.h>
float fact (float);
void main()
{float n,x,sum1=0,sum2=0,total;
clrscr();
cout<<"Enter the limit upto which the series is to be calculated ";
cin>>n;
cout<<"Enter the value of x ";
cin>>x;
for(int i=1;i<=n;i=i+4)
       {	sum1=sum1+(pow(x,i)/fact(i));
       }
for( i=3;i<=n;i=i+4)
	{	sum2=sum2-(pow(x,i)/fact(i));
	}

	total=sum1+sum2;

cout<<"The calculated sin series is "<<endl<<total<<;
getch();
}

float fact (float a)
{float fac=1,j;
j=a;
while(j>0)
{
fac=fac*j;
j--;
}
return(fac);
}