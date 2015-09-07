#include<iostream.h>
#include<conio.h>
void main()
{int arr[20],key,n,found=0,pos;
clrscr();
cout<<"Enter the limit ";
cin>>n;
cout<<"Enter the elements of the array ";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Enter the element to be searched ";
cin>>key;
for(i=0;i<n;i++)
{   if(arr[i]==key)
    {
    found=1;
    pos=i+1;
    break;
    }
    }
if(found==1)
cout<<"The element is found at position "<<pos;
else
cout<<"The element is not found ";
getch();
}