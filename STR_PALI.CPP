//String palindrome
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{ char a[20];
 clrscr();
 cout<<"Enter a sentence ";
 gets(a);
 int n=strlen(a);
 int flag=0;
 for(int i=0;i<=n/2;i++)
 {    if(a[i]==a[n-i-1])
      flag=1;
      }
  if(flag==1)
  cout<<"The entered string is a palindrome ";
  else
  cout<<"The entered string is not a palindrome ";
  getch();
  }