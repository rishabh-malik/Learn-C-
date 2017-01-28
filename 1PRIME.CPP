#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,i,b=0;
cout<<"enter no:";
cin>>a;
for(i=2;i<a;i++)
{
if((a%i)==0)
b++;
}
if(b)
cout<<"composite";
else
cout<<"prime";
getch();
}