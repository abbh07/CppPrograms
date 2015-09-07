//To find all the prime numbers in a given 1D array and print them
#include<iostream.h>
#include<conio.h>
void main()
{int n,a[20],flag=0;
clrscr();
cout<<"How many elements you want to enter?? ";
cin>>n;
cout<<"Enter the elements ";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"The prime numbers are ";
for(i=0;i<n;i++)
{  for(int j=2;j<a[i];j++)
   {if(a[i]%j==0)
    flag=1;
    }
if(flag==0)
cout<<"  "<<a[i];
flag=0;

}
getch();
}