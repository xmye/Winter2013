//ģʽ���ң���ӡ��ƥ��ģʽ֮�������� 
#include<stdio.h>
#include<string.h>
#define MAXLINE 100

int getline(char *line,int max);

//find:print lines that match pattern from 1st arg
main(int argc,char *argv[]){
	char line[MAXLINE];
	long lineno=0;
	int c,except=0,number=0,found=0;
	
	while(--argc>0&&(*++argv)[0]=='-')  //�����ַ������ַ� 
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
      	if(argc!=1)   //�鵽ģʽ 
      	   printf("usage:find -x -n pattern\n");
   	    else         //����һ����δ�鵽 
   	      while(getline(line,MAXLINE)>0){ //����һ�� 
      	   	lineno++;
      	   	if((strstr(line,*argv)!=NULL)!=except){ //argv����һ���г��֣����Ҳ�����1����ƥ��  -x����ӡ��ƥ��� 
	   	      	if(number)                         //��-n����ӡ�к� 
	   	      	    printf("%ld",lineno);         //����ڵڼ��в鵽 *argv 
	   	      	  printf("%s",line);
	   	      	  found++; 
	   	      }
      	   }
      	   return found;
}