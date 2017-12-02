#include<stdio.h>

void expand(char s[],char s2[]);

int main(){
	char s[]={'2','3','-','a','-','c'};
	char s2[]={};
	expand(s,s2 );
	printf("%c\n",s2);
}

void expand(char s[],char s2[]){
	for(int i=0,j=0;s[i]!='\0';i++,j++){
		if(s[i]>='a'&&s[i]<='z'&&s[i+1]=='-'&&s[i+2]<='z'&&s[i+2]>='a'){
			for(int k=s[i];k<=s[i+2];k++){
				s2[j++]=k;
				printf("%c\n",s2);
			}
				i+=3;
		}
		if(s[i]<='9'&&s[i]>='0'&&s[i+1]=='-'&&s[i+2]>='0'&&s[i+2]<='9'){
				for(int k=s[i];k<=s[i+2];k++){
				s2[j++]=k;
		}
				i+=3;
	}
		s2[j]=s[i];
	printf("%c\n",s2);
}
}