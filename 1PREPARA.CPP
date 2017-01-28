#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
char ch;
int a,b,c,d,r1,r2;
do
{
cout<<"enter a";
cin>>a;
cout<<"enter b";
cin>>b;
cout<<"enter c";
cin>>c;
d=b*b-4*a*c;
if(a==0)
{
cout<<"not a quadratic equation";
goto end;
}
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"the roots are"<<r1<<"and"<<r2;
}
else if(d==0)
{
r1=r2=-b/(2*a);
cout<<"the roots are"<<r1<<"and"<<r2;
}
else if(d<0)
cout<<"the roots are imaginary";
end:
cout<<"\n"<<"want to enter more?";
cin>>ch;
}while(ch=='y'||ch=='Y');
getch();
}
