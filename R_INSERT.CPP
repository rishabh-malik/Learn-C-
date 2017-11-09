#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[100],i,j,n,ch,pos;
printf("Enter size of array:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("1 for insertion 2 for deletion:");
scanf("%d",&ch);
switch(ch){
case 1:{
printf("Enter element and position you want to insert:");
scanf("%d",&j);
scanf("%d",&pos);
for(i=pos;i<n;i++){
a[i+1]=a[i];}
a[pos]=j;
for(i=0;i<=n;i++){
printf("%d",a[i]);
}
break;
}
case 2:{}

}
getch();
}


}
