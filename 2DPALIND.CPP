//Function - To find the palindrome numbers in the entered matrix
#include<iostream.h>
#include<conio.h>
void palin (int a[][30],int,int);
void main()
{int a[30][30],p,q,i,j;
clrscr();
cout<<"Enter the dimension of the matrix "<<endl;
cin>>p>>q;
cout<<"Enter the elements of the matrix ";
for(i=0;i<p;i++)
{ for (j=0;j<q;j++)
  cin>>a[i][j];
  }
cout<<"The matrix you entered is ";
for(i=0;i<p;i++)
{ cout<<endl;
  for(j=0;j<q;j++)
  cout<<a[i][j]<<'\t';
  }
palin(a,p,q);
getch();
}

void palin (int a[][30],int p,int q)
{ int dig,rev=0,z;
cout<<endl<<"The palindrome numbers in the matrix are ";
 for(int i=0;i<p;i++)

 {	for(int j=0;j<q;j++)
       { z=a[i][j];
	 rev=0;
	 while(a[i][j]!=0)
		{dig=a[i][j]%10;
		rev=dig+(10*rev);
		a[i][j]=(a[i][j]/10);
		}
	if(rev==z)
	cout<<endl<<'\t'<<z;
	}
 }
 }
