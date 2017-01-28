#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
float sum;
cout<<"enter n:";
cin>>n;
for(i=1,sum=0;i<=n;i++)
{
sum=sum+i;
}
cout<<sum;
getch();
}