//在排好序长度为n的数组v中折半查找x

#include<stdio.h>
int binSearch(int x,int v[],int n);
main(){
	//int v[]=[1,2,3,5,6,8];
	int v[6]={1,2,3,5,6,8};
	printf("%d\n",binSearch(3,v,6));
} 

int binSearch(int x,int v[],int n){
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<high){
		mid=(low+high)/2;
			if(v[mid]<x){
				high=mid-1;	
			}else if(v[mid]>x){
				low=mid+1;
			}else{
			return mid;
		}
	}
	return -1; 
}