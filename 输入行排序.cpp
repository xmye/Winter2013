//对输入行按数值大小排序
 
#include<stdio.h>
#include<string.h>
#define MAXLINES 100

char *lineptr[MAXLINES];

int readlines(char *lineptr[],int nlines);
void writelines(char *lineptr[],int nlines);


void qsort(void *lineptr[],int left,int right,int (*comp)(void *,void *));//有两个指针参数的函数，
																		 //通用指针类型void*,适用于任何类型 

int numcmp(char *,char *);

main(int argc,char *argv[]){
	int nlines;  //number of input lines read
	int numeric=0;  //1 if number sort
	
	if(argc>1&&strcmp(argv[1],"-n")==0)  //???
	   numeric=1;
 	if((nlines=readlines(lineptr,MAXLINES))>=0){
	 	qsort((void**) lineptr,0,nlines-1, 
	 	(int (*)(void*,void*))(numberic?numcmp:strcmp));//strcmp,numcmp是函数地址 
	 	writelines(lineptr,nlines);
	 	return 0;
	 }else{
 		printf("input too big to sort\n");
 		return 1;
 	}
}  

void qsort(void *lineptr[],int left,int right,int (*comp)(void *,void *));
{
	int i,last;
	
	void swap(void *v[],int,int);
	
	if(left>=right)
	  return ;
 	swap(v,left,(left+right)/2);
 	last=left;
 	for(i=left+1;i<=right;i++)
 	    if((*comp)(v[i],v[left])<0)  //把比中间元素（移到了最前面）小的移到后面 
 	      swap(v,++last,i);
    swap(v,left,last);
    qsort(v,left,last-1,comp);
    qsort(v,last+1,right,comp);
}

void swap(void *v[],int i,int j){
	void *temp;
	
	temp=v[i];
	v[i]=v[j];
	v[j]=temp;
}

int numcmp(char *s1,char *s2){
	double v1,v2;
	
	v1=atof(s1);
	v2=atof(s2);
	if(v1<v2)
	  return -1;
 	else if(v1>v2)
 	  return -1;
  	else 
  	  return 0;
} 