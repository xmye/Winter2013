#include<ctype.h>
#include<stdio.h>
int getch();
void ungetch(int);

//���������һ������������*ph

int getint(int *pn)
{
	int c,sign;
	while(isspace(c==getch()))  //�����հ� 
	   ;
 	if(!isdigit(c) && c!= EOF && c!='+' && c!='-'){
	 	ungetch(c);  //����Ĳ���һ������
	 	return 0;
	 } 
	 sign = (c=='-')?-1:1; //ȷ������  
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