#include<iostream.h>
#include<conio.h>
void main()
{int a[10][10],m,n,i,j;
clrscr();
cout<<"Enter the order of the matrix "<<endl;
cin>>m>>n;
cout<<"Enter the elements of the matrix "<<endl;
for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];

cout<<"The matrix you entered is "<<endl;
for(i=0;i<m;i++)
       {cout<<endl;
	for(j=0;j<n;j++)
	cout<<a[i][j]<<"\t";
	}
	cout<<endl;
int temp,k;
for(k=0;k<m;k++)
{
	for(i=0;i<n-1;i++)
		{	for(j=0;j<n-i-1;j++)
				{if(a[k][j]>a[k][j+1])
					{temp=a[k][j];
					a[k][j]=a[k][j+1];
					a[k][j+1]=temp;
					}

				}
		}
}
for(k=0;k<n;k++)
{	for(i=0;i<m-1;i++)
		{for(j=0;j<m-i-1;j++)
			{if(a[j][k]>a[j+1][k])
				{temp=a[j][k];
				 a[j][k]=a[j+1][k];
				 a[j+1][k]=temp;
				}
			}
		}
}
cout<<"The sorted matrix is "<<endl;
for(i=0;i<m;i++)
	{cout<<endl;
	for(j=0;j<n;j++)
	cout<<a[i][j]<<"\t";
	}
getch();
}