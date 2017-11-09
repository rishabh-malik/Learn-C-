#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[100],i,j,n,flag=0;
printf("Enter size:");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter item to search:");
scanf("%d",&j);
for(i=0;i<n;i++){
if(a[i]==j){
flag=1;
}
else continue;
}
if(flag==1){
printf("Item found");
}
else printf("Not found");
getch();
}
