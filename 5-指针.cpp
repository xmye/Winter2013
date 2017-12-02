#include<ctype.h>
#include<stdio.h>
int getch();
void ungetch(int);

//将输入的下一个整形数赋给*ph

int getint(int *pn)
{
	int c,sign;
	while(isspace(c==getch()))  //跳过空白 
	   ;
 	if(!isdigit(c) && c!= EOF && c!='+' && c!='-'){
	 	ungetch(c);  //输入的不是一个数字
	 	return 0;
	 } 
	 sign = (c=='-')?-1:1; //确定符号  
	 if(c=='+'||c=='-')
	   c=getch();
  	 for(*pn=0;isdigit(c);c=getch())
  	 	*pn=10**pn+(c-'0');
 	 *pn*=sign;
 	 if(c!=EOF)
 	    ungetch(c);
     return c;
} 

int main(){
	
}