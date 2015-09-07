//To toggle the case of every alphabet in a given sentence
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{ char a[20];
clrscr();
cout<<"Enter a sentence ";
gets(a);
for(int i=0;a[i]!='\0';i++)
{    if(isalpha(a[i]))
	{if(a[i]>=97)
	 a[i]-=32;
	 else
	 a[i]+=32;
	 }
}
cout<<"The sentence after toggling the case is ";
puts(a);
getch();
}