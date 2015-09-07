#include<iostream.h>
#include<conio.h>
void main()
{int w,x,y,left,right;
clrscr();
cout<<"Enter any number ";
cin>>w;
cout<<"Enter how many times the left shift operator to be applied ";
cin>>x;
left=w<<x;
cout<<"Enter how many times the right shift operator to be applied ";
cin>>y;
right=w>>y;
cout<<"The number after left shift operator = "<<left
<<" and after right shift operator = "<<right;
getch();
}
