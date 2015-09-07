//ASCII value of alphabets
#include<iostream.h>
#include<conio.h>
void main()
{ char a;
 clrscr();
 for(a=65;a<=122;a++)
 {if(a>90 && a<97)
  continue;
  cout<<a<<" - "<<int (a)<<" ";
  }
  cout<<endl;
  getch();
  }