#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float marks[5];
int i;
for (i=0;i<5;i++)
{
cout<<"enter marks of student"<<i+1<<":";
cin>>marks[i];
}
cout<<"\n";
for(i=0;i<5;i++)
{
cout<<"marks["<<i<<"]="<<marks[i]<<"\n";
}
getch();
}
