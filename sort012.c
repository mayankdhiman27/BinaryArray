#include<stdio.h>
/*
DUTCH-NATIONAL FLAG ALGORITHM
*/
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}

void main(){
int a[]={0,1,2,2,2,0,0,1,1,2,0,2,1};
int n=13;
int low=0,mid=0,high=n-1;
while(mid<=high){
switch(a[mid]){
case 0:
	swap(&a[low++],&a[mid++]);
	break;
case 1:
	mid++;
	break;
case 2:
	swap(&a[mid],&a[high--]);
	break;
}
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}

}
