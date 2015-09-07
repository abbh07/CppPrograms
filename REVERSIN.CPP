#include<iostream.h>
#include<conio.h>
void main()
{int n,arr[20],temp,j;
clrscr();
cout<<"How many elements you want to enter?? ";
cin>>n;
cout<<"Enter the elements of the array ";
for(int i=0;i<n;i++)
cin>>arr[i];
for(i=0,j=n-1;i<n/2;i++,j--)
{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
cout<<"The reversed array is ";
for(j=0;j<n;j++)
cout<<"\t"<<arr[j]<<"\t";
getch();
}