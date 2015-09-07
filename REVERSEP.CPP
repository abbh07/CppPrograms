#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int rev=0;
int num,dig,n;
cout<<"Enter a number - ";
cin>>num;
n=num;
while(num>0)
{
dig=num%10;
rev=rev*10+dig;
num=num/10;
}
cout<<"Reversed no. = "<<rev;
if(n==rev)
cout<<"\n Given number is a Palindrome";
else
cout<<"\n Given number is not a palindrome";
getch();
}