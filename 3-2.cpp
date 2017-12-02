//复制字符串，转换行符，制表符 
#include<stdio.h> 
void escape(char s[],char t[]);

int main(){
	char s[8],t[8];
	escape(s,t);
} 

void escape(char s[],char t[]){
	for(int i=j=0;t[i]!='\0';i++){
		switch(t[i]){
			case '\n':t[i]='\\n';i++;
			case '\t':t[i]='\\t';i++;
			case ' ':t[i]='0';i++;
			default:t[i]=s[j++]; 
		}
	}
	s[i]='\0';
	printf("%c",t);
}