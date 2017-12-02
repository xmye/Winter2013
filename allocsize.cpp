#define ALLOCSIZE 1000; //���ÿռ��С

static char allocbuf[ALLOCSIZE];  //allocʹ�õĴ洢��

static char *allocp=allocbuf;   //��һ������λ��

char *alloc(int n){  //����ָ��n���ַ���ָ�� 
	if(allocbuf+ALLOCSIZE-allocp>=n){  //���㹻�Ŀռ� 
		allocp+=n;
		return allocp-n; 
	} else
	return 0;
} 

void afree(char *p){  //�ͷ�p��ָ��Ĵ洢�ռ�    
	if(p>=allocbuf && p<allocbuf+ALLOCSIZE)
	  allocp=p;   //ָ��ľ��ǿ���λ�ã���ַ 
}