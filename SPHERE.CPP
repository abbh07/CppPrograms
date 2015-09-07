#include<iostream.h>
#include<conio.h>
void main()
{float r,vol,ar;
clrscr();
cout<<"Enter the radius of the sphere ";
cin>>r;
vol=(4*3.14*r*r*r)/3;
ar=4*3.14*r*r;
cout<<"The volume is "<<vol<<" and the surface area is "<<ar;
getch();
}