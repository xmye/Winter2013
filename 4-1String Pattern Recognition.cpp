//�ж��ַ�����ĳ��ģʽ�����ƥ������һ���ַ�λ�á� 
#include<stdio.h>
#include<string.h> 
#define MAXLINE 100

int getline(char line[],int);
int strindex(char line[],char patter[]);
char patter[]="ould"; 

main(){
	//��ȡ���ж�λ�ã���� 
   	char line[MAXLINE];
	int found=0;
	while(getline(line,MAXLINE)>0)
	 if(strindex(line,patter)>=0){
 		printf("%s",line);
 		found++;
 	}		
 	return found;
}

//���б��浽s�У������ظ��еĳ��� 
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

//ʶ��ģʽ�������ط���ģʽ����ĩ�ַ���λ�� 
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