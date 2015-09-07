#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{float p,r,si,ci,t;
clrscr();
cout<<"Enter the principle amount, the rate and the time ";
cin>>p>>r>>t;
si=(p*r*t)/100;
ci=(p*pow((1+(r/100)),t)-100);
cout<<"The simple interest is "<<si<<" and the compound interest is "<<ci;
getch();
}