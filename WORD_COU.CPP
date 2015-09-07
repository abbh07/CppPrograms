//To count the number of words in a given sentence
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{ char a[30]; int count=0,i;
clrscr();
cout<<"Enter a sentence "<<endl;
gets(a);
for(i=0;a[i]!='\0';i++)
{    if((a[i]==' ') && (a[i+1]!=' ') || (a[i]=='.'))
     count++;
     }
cout<<"The number of words in the sentence is "<<count<<endl;
getch();
}