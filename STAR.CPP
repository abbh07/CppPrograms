#include<iostream.h>
#include<conio.h>
void main()
{int i,x;
clrscr();
cout<<"How many rows you want to print?? ";
cin>>x;
int y;
for(i=1;i<=x;i++)
{       cout<<endl;
	for(y=1;y<=i;y++)
	cout<<"*";
	}
getch();
}