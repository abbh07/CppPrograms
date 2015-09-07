//To count the even and odd terms and sort the rows of the matrix
#include<iostream.h>
#include<conio.h>
void even (int a[][30],int,int);
void sort (int a[][30],int,int);
void main()
{int a[30][30],p,q,i,j;
clrscr();
cout<<"Enter the dimension of the matrix "<<endl;
cin>>p>>q;
cout<<"Enter the elements of the matrix "<<endl;
for(i=0;i<p;i++)
{	for(j=0;j<q;j++)
	cin>>a[i][j];
	}
cout<<"The matrix you entered is "<<endl;
for(i=0;i<p;i++)
	{cout<<endl;
	for(j=0;j<q;j++)
	cout<<'\t'<<a[i][j];
	}
even(a,p,q);
sort(a,p,q);
getch();
}


void even (int a[][30],int p,int q)
{int i,j,e=0,o=0;
	for(i=0;i<p;i++)
	{	for(j=0;j<q;j++)
		{if(a[i][j]%2==0)
		 e++;
		 else
		 o++;
		 }
	 }
   cout<<endl<<"The number of even numbers and odd numbers in the matrix are ";
   cout<<endl<<e<<endl<<o;
}

void sort (int a[][30],int p,int q)
{int i,j,temp;
	for(i=0;i<p;i++)
	{	for(j=0;j<q-1;j++)
		 {    for(int k=0;k<q-j-1;k++)
		      {if (a[i][k]>a[i][k+1])
			  {temp=a[i][k];
			   a[i][k]=a[i][k+1];
			   a[i][k+1]=temp;
			  }
		      }
		  }
	 }
cout<<endl<<"The sorted matrix is ";
for(i=0;i<p;i++)
{       cout<<endl;
	for(j=0;j<q;j++)
	cout<<'\t'<<a[i][j];
}
}