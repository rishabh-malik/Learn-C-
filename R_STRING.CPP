#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n;
char a[100];
clrscr();
printf("Enter size:");
scanf("%d",&n);
printf("Enter string:");
for(i=0;i<n;i++){
scanf("%s",&a[i]);
}
printf("Enter n:");
scanf("%d",&j);
printf("Leftmost n characters:")      ;
for(i=0;i<j;i++){
printf("%c",a[i]);
}
getch();
}