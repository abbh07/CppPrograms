#include<iostream.h>
#include<conio.h>
void main()
{int a[20],b[20],c[50],m,n;
clrscr();
cout<<"How many elements you want to enter in array 1 ??"<<endl;
cin>>m;
cout<<"How many elements you want to enter in array 2 ??"<<endl;
cin>>n;
cout<<"Enter the elements of the array 1"<<endl;
int i,j,k;
for(i=0;i<m;i++)
cin>>a[i];
cout<<"Enter the elements of the array 2"<<endl;
for(j=0;j<n;j++)
cin>>b[j];
int w=0;
int z=(m+n);
for(i=0;i<m;i++)
{	for(k=0;k<m;k++)
		{c[k+w]=a[i];
		}
w++;
}
int x=0;
for(j=0;j<n;j++)
{	for(k=m;k<z;k++)
		{c[k+x]=b[j];
		}
		x++;
}
cout<<"The array after merging is "<<endl;
for(k=0;k<z;k++)
cout<<c[k]<<"\t";
getch();
}