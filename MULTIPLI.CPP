//To generate multiplication table from numbers upto k terms
#include<iostream.h>
#include<conio.h>
void main()
{int x,y,a;
clrscr();
cout<<"Enter the number upto which the multiplication table is to be printed ";
cin>>x;
for(int i=1;i<=x;i++)
{
for(int j=1;j<=x;j++)
  {a=i*j;
  cout<<a<<"\t";
  }
  cout<<endl;
}
getch();
}
