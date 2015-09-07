#include<iostream.h>
#include<conio.h>
void main()
{int m,n,a[10][10],i,j;
 clrscr();
 cout<<"Enter the dimension of the matrix "<<endl;
 cin>>m>>n;
 cout<<"Enter the elements of the matrix "<<endl;
 for(i=0;i<m;i++)
 {  for(j=0;j<n;j++)
    cin>>a[i][j];
 }
 int key,count=0;
 cout<<"Enter the element to be searched "<<endl;
 cin>>key;
 for(i=0;i<m;i++)
 {  for(j=0;j<n;j++)
    {    if(a[i][j]==key)
		count++;
     }
 }
if(count==0)
cout<<"Element not found ";
else
cout<<"Element found "<<count<<" times in the given matrix "<<endl;
getch();
}