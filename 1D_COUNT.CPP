//To search for an element in 1D array and count the number of its occurrences
#include<iostream.h>
#include<conio.h>
void main()
{int n,a[10],key,count=0;
clrscr();
cout<<"How many elements you want to enter?? ";
cin>>n;
cout<<"Enter the elements ";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the element you want to find ";
cin>>key;
for(i=0;i<n;i++)
{  if(a[i]==key)
   count++;
}
if(count==0)
cout<<"Element not found ";
else
cout<<"Element found "<<count<<" times in the entered array "<<endl;
getch();
}
