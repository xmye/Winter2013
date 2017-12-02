#include<stdio.h>
#include<stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

//逆波兰计算器

main(){
	int type;
	double op2;
	char s[MAXOP];
	
	while((type=getop(s))!=EOF){
		switch(type){
			case NUMBER:
			   push(atof(s));
			   break;
   			case '+':
			   push(pop()+pop());
			   break;
   			case '*':
			   push(pop()*pop());
			   break;
   			case '-':
			   op2=pop();
			   push(pop()-op2);
			   break; 
   			case '/':op2=pop();
			   if(op2!=0.0)
			   push(pop()/op2);
			   else
			   printf("error:zero divsionor\n");
			   break;
   			case '/n':
			   printf("\t%.8g\n",pop());
			   break;
   			default:
   			   printf("error:unknow command %s\n",s);
   			   break;
		 }
	}
	return 0;
} 

#define MAXVAL 100 //栈的最大深度 

int sp=0;  //下一个空闲栈的位置
double val[MAXVAL];  //值栈

void push(double f){    //把f压入值栈 
	if(sp<MAXVAL)
	  val[sp++]=f;
 	else 
 	  printf("error:stack full,can't push %g\n",f);
} 

double pop(){   //返回并弹出栈顶元素 
	if(sp>0)
	   return val[--sp];
 	else{
	 	printf("error:stack empty\n");
	 	return 0.0;
	 }
} 

#include<ctype.h>
int getch();
void ungetch(int);

int getop(char s[]){
	int i,c;
	while((s[0]=c=getchar())==' '||c=='\t')
	   ;
 	if(!isdigit(c)&&c!='.')
 	  return c;
  	if(isdigit(c))
  	  while(isdigit(s[++i]=c=getch()))
  	  ;
    if(c=='.')
      while(isdigit(s[++i]=c=getch()))
      ;
    s[i]='\0';
    if(c!=EOF)
    ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp=0;

int getch(){
	return (bufp>0) ? buf[--bufp]:getchar();
}

void ungetch(int c){
	if(bufp>=BUFSIZE)
	  printf("ungetch:too many characters\n");
 	else
 	  buf[bufp++]=c; 
}