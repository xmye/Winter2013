#define ALLOCSIZE 1000; //空用空间大小

static char allocbuf[ALLOCSIZE];  //alloc使用的存储区

static char *allocp=allocbuf;   //下一个空闲位置

char *alloc(int n){  //返回指向n个字符的指针 
	if(allocbuf+ALLOCSIZE-allocp>=n){  //有足够的空间 
		allocp+=n;
		return allocp-n; 
	} else
	return 0;
} 

void afree(char *p){  //释放p所指向的存储空间    
	if(p>=allocbuf && p<allocbuf+ALLOCSIZE)
	  allocp=p;   //指向的就是空闲位置，地址 
}