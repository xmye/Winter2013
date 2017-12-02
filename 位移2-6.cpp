#include<stdio.h>

int setbits(int x,int p,int n,int y);

main(){
	printf("%d",setbits(1111,4,3,0));	
}

int setbits(int x,int p,int n,int y){	
	//将x需要的变的n为移到最右边并清零  跟1或----1  0与---0 
	//取将y的n位，将其余为变为1 
    int c=(~0<<n)&(x>>(p+1-n))|(~0<<n)&y;	
	printf("%d\n",c);	
	return c;
}