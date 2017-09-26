#include<stdio.h>

void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}

void main(){
int a[]={1,0,0,0,1,1,1,1,0,0,1,0,1,0,0,0,1,0,0,1};
int j=-1,i;
for(i=0;i<(sizeof(a)/sizeof(int));i++){
if(a[i]<1){
j++;
swap(&a[i],&a[j]);
}
}
int k;
for(k=0;k<(sizeof(a)/sizeof(int));k++){
printf("%d ",a[k]);
}
printf("\n");
}
