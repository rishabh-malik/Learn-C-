#include<stdio.h>
#include<conio.h>
void binary(int a[],int n,int j){
int beg=0,mid,last=n-1;
mid=(beg+last)/2;
while(beg<last){
if(a[mid]==j){
printf("Element found");
break;
}
else if(j>a[mid]){beg=mid+1;}
else if(j<a[mid]){last=mid-1;}
mid=(beg+last)/2;
}
}

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
binary(a,n,j);
getch();
}