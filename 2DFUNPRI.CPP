//Function - To display the prime numbers in the entered matrix
#include<iostream.h>
#include<conio.h>
void prime (int a[][30],int,int);
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
{	cout<<endl;
	for(j=0;j<q;j++)
	cout<<'\t'<<a[i][j];
}
prime(a,p,q);
getch();
}

void prime (int a[][30],int p,int q)
{int i,j,k,flag=1;
cout<<endl<<"The prime numbers in the matrix are ";
for(i=0;i<p;i++)
{	for(j=0;j<q;j++)
		{flag=1;
		for(k=2;k<a[i][j];k++)
		 {if((a[i][j]%k)==0)
		   flag=0;
		 }

		if(flag==1)
		cout<<endl<<'\t'<<a[i][j];
		}
}
}