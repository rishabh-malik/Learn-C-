#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int i,j,k;
for(i=1;i<=10;i++)
{
cout<<"\n";
for(j=1;j<=10;j++)
{
k=i*j;
cout<<i<<"*"<<j<<"="<<k<<"\t";
delay(50);
}
}
getch();
}

