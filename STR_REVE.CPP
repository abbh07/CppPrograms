//Reversing a string
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
int temp;
for(int i=0;i<n/2;i++)
{  temp=a[i];
   a[i]=a[n-i-1];
   a[n-i-1]=temp;
   }

   cout<<"The reversed string is "<<endl;
   puts(a);
   getch();
   }