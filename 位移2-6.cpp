#include<stdio.h>

int setbits(int x,int p,int n,int y);

main(){
	printf("%d",setbits(1111,4,3,0));	
}

int setbits(int x,int p,int n,int y){	
	//��x��Ҫ�ı��nΪ�Ƶ����ұ߲�����  ��1��----1  0��---0 
	//ȡ��y��nλ��������Ϊ��Ϊ1 
    int c=(~0<<n)&(x>>(p+1-n))|(~0<<n)&y;	
	printf("%d\n",c);	
	return c;
}