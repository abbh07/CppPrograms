#include<iostream.h>
#include<conio.h>
void main()
{int a[10],b[10],c[20],m,n;
clrscr();
cout<<"How many elements you want to enter in the first array? "<<endl;
cin>>m;
cout<<"How many elements you want to enter in the second array? "<<endl;
cin>>n;
cout<<"Enter the elements of the first array "<<endl;
for(int i=0;i<m;i++)
cin>>a[i];
cout<<"Enter the elements of the second array "<<endl;
for(int j=0;j<n;j++)
cin>>b[j];
int x=m+n;
for(i=0;i<m;i++)
{	for(j=0;j<n;j++)
	{	for(int k=0;k<x;k++)
		{	if(a[i]>b[j])
			{c[k]=b[j];
			 c[k+1]=a[i];
			 }
			 else
			 {if(a[i]<b[j])
				{c[k]=a[i];
				 c[k+1]=b[j];
				}
			 }
		}
	  }
  }
 cout<<"The array after merging is "<<endl;
 for(int k=0;k<x;k++)
 cout<<c[k]<<"\t";
 getch();
 }