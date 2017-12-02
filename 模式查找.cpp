//模式查找，打印除匹配模式之外所有行 
#include<stdio.h>
#include<string.h>
#define MAXLINE 100

int getline(char *line,int max);

//find:print lines that match pattern from 1st arg
main(int argc,char *argv[]){
	char line[MAXLINE];
	long lineno=0;
	int c,except=0,number=0,found=0;
	
	while(--argc>0&&(*++argv)[0]=='-')  //测试字符串首字符 
	   while(c=*++argv[0])
	      switch(c){
      		case 'x':
      		  except=1;
      		  break;
   		    case 'n':
	          number=1;
	          break;
            default:
              printf("find:illegal option %c\n",c);
              argc=0;
              found=-1;
              break;
      	}
      	if(argc!=1)   //查到模式 
      	   printf("usage:find -x -n pattern\n");
   	    else         //在这一行中未查到 
   	      while(getline(line,MAXLINE)>0){ //读下一行 
      	   	lineno++;
      	   	if((strstr(line,*argv)!=NULL)!=except){ //argv在这一行中出现，并且不等于1，不匹配  -x，打印不匹配的 
	   	      	if(number)                         //有-n，打印行号 
	   	      	    printf("%ld",lineno);         //输出在第几行查到 *argv 
	   	      	  printf("%s",line);
	   	      	  found++; 
	   	      }
      	   }
      	   return found;
}