#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,re,im,r,r1,r2;
int choice;
clrscr();
cout<<"Enter the value of a,b,c ";
cin>>a>>b>>c;
d=((b*b)-(4*a*c));
cout<<"\nThe discriminant is "<<endl<<d;
if(d<0)
choice=1;
else
{
if(d==0)
choice=2;
else
choice=3;
}
switch (choice)
{
case 1:

	re=(-b/(2*a));
	im=(sqrt(fabs(d))/2*a);
	cout<<"\nThe roots are "<<re<<"+i"<<im<<"\n and "<<re<<"-i"<<im;
	break;

case 2:

	r=(-b/(2*a));
	cout<<"\nThe root is "<<r;
	break;

case 3:

	r1=(-b+sqrt(d))/2*a;
	r2=(-b-sqrt(d))/2*a;
	cout<<"\nThe roots are "<<r1<<"\n and"<<r2;
	break;

}
getch();
}


