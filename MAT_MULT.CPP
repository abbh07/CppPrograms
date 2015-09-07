//Multiplication of two matrices
#include<iostream.h>
#include<conio.h>
void main()
{int m,n,p,q,a[10][10],b[10][10],c[10][10]={0};
clrscr();
cout<<"Enter the dimension of the first matrix "<<endl;
cin>>m>>n;
cout<<"Enter the dimension of the second matrix "<<endl;
cin>>p>>q;
int i,j;
if(m==p&&n==q)
{
 cout<<"Enter the elements of the first matrix "<<endl;
 for(i=0;i<m;i++)
 {  for(j=0;j<n;j++)
    cin>>a[i][j];
 }
 cout<<"Enter the elements of the second matrix "<<endl;
 for(i=0;i<p;i++)
	{  for(j=0;j<q;j++)
	cin>>b[i][j];
	}

    for(i=0;i<m;i++)
    {    for(j=0;j<n;j++)
	 {    for(int k=0;k<n;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	 }
    }
	 cout<<"The multiplication of the two matrices is "<<endl;
	 for(i=0;i<m;i++)
	 {    for(j=0;j<n;j++)
	      cout<<c[i][j]<<"\t";
	      }
    }
    else
    cout<<"The matrices are not multiplicable ";
    getch();
    }



