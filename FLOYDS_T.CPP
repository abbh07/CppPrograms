#include<iostream.h>
#include<conio.h>
void main()
{int n,arr[100][100],a=1,j;
clrscr();
cout<<"Enter the limit ";
cin>>n;
for(int i=0;i<=n;i++)
  {
   for ( int j=0;j<=n;j++)
	{while(i<=j)
	 arr[i][j]=a;
	 a++;
	}
  }
for(i=0;i<=n;i++)
{for(j=0;j<=n;j++)
 cout<<arr[i][j];
}
getch();
}