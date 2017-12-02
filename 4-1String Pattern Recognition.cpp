//判断字符串中某个模式，输出匹配的最后一个字符位置。 
#include<stdio.h>
#include<string.h> 
#define MAXLINE 100

int getline(char line[],int);
int strindex(char line[],char patter[]);
char patter[]="ould"; 

main(){
	//读取，判断位置，输出 
   	char line[MAXLINE];
	int found=0;
	while(getline(line,MAXLINE)>0)
	 if(strindex(line,patter)>=0){
 		printf("%s",line);
 		found++;
 	}		
 	return found;
}

//将行保存到s中，并返回该行的长度 
int getline(char s[],int lim){	
	int c,i;	
	while(--lim > 0 && (c=getchar()) != EOF &&  c!='\n')
	  s[i++]=c;
	  if(c=='\n'){
  		s[i++]='\n';
   	}
	   s[i]='\0';
	   return i; 
}

//识别模式，并返回符合模式的最末字符的位置 
int strindex(char s[],char t[]){
	int i,j,k;
	for(int i=0;s[i]!='\0';i++){ 
	   for(j=i,k=0;t[k]!='\0'&&s[j]==s[k];j++,k++)
	      ;
		if(k>0&&t[k]=='\0')
		  return i+strlen(t)-1; 
   }
   return -1; 
}