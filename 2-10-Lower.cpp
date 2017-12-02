#include<stdio.h>
//大写转换为小写 
//得到字符，判断，转化  
int lower(int);
main(){
     printf("%c",lower('A'));
} 

int lower(int c){
	return (c<='Z'&&c>='A'?c+'a'-'A':c);
}