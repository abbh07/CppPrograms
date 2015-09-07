#include<iostream.h>
#include<conio.h>
void main()
{int i,x,y;
clrscr();
cout<<"How many lines you want to print?? ";
cin>>x;
for(i=1;i<=x/2;i++)
{	cout<<endl;
	for(y=1;y<=i;y++)
	cout<<"*";
	}
		for(i=x/2;i>0;i--)
	       {        cout<<endl;
			for(y=i;y>0;y--)
			cout<<"*";
		}

getch();
}
