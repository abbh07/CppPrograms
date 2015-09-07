 #include<iostream.h>
 #include<conio.h>
 void main()
 {int x;
 float y;
 clrscr();
 cout<<"Enter the number of days a member is late to return the book ";
 cin>>x;
 if(x==5)
{ y=0.50;
 cout<<"The fine is rs "<<y;
 }
else
{if(x>=6&&x<=10)
{y=1;
cout<<"The fine is rs "<<y;}
else
{if(x>10&&x<=30)
{y=5;
cout<<"The fine is rs "<<y;}
else
{y=10;
cout<<"The fine is rs "<<y;}
}}
getch();
}

