#include<string.h>
#include<stdio.h>

int trim(char s[]);
	main(){
		char s[]={'0','3',' ','\n','\t','  '};
		printf("%c",s);
  int n= trim(s);	
  	printf("%d",n);
} 


int trim(char s[]){
	int n;
	for(n=strlen(s)-1;n>=0;n--)
		if(s[n]!=' '&&s[n]!='\n'&&s[n]!='\t')
		  break;
  	s[n+1]='\0';
  	return n;
//	printf("%d",s);
	printf("%d",n);
} 