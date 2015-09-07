//Smallest and the largest element in a 1D array
#include<iostream.h>
#include<conio.h>
void main()
{int n,a[20],found;
clrscr();
cout<<"Enter the limit ";
cin>>n;
cout<<"Enter the elements of the array ";
for(int i=0;i<n;i++)
cin>>a[i];
int lar=a[0];
int sml=a[0];
for(i=0;i<n;i++)
{if(a[i]>a[0])
lar=a[i];
if(a[i]<a[0])
sml=a[i];
}
cout<<endl<<"The largest element is "<<lar;
cout<<endl<<"The smallest element is "<<sml;
getch();
}
