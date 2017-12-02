//ͳ�ƹؼ��ֳ��ִ��� ָ�� 

#include<stdio.h>
#include<string.h>
#include <ctype.h>

#define MAXWORD 100

int getword(char *,int); 
struct key *binsearch(char *,struct key *,int);

struct key{
	char *word;
	int count;
}keytab[NKEYS];

main(){
	char word[MAXWORD];
	struct key *p;  
	
	while(getword(word,MAXWORD)!=EOF)
	   if(isalpha(word[0]))
	      if((p=binsearch(word,keytab,NKEYS))!=NULL)
	         p->count++;
    for(p=keytab;p<keytab+NKEYS;p++)
       if(p->count >0)
          printf("%4d %s\n",p->count,p->word);
          return 0;
}

//�۰����

struct key *binsearch(char *word,struct key tab[],int n){
	int cond;
    struct key *low=&tab[0];
	struct key *high=&tab[n];
	struct key *mid;
	
	while(low<=high){
		mid=low+(high-low)/2;
		if((cond=strcmp(word,mid->word))<0)
		   high=mid;
  		else if(cond>0)
  		   low = mid+1;
    	else
    	   return mid;
	}
	    return NULL;
} 

//��ȡ��һ���ַ�

int getword(char *word,int lim)
{
	int c,getch(void);
	void ungetch(int);
	char *w=word;
	
	while(isspace(c==getch()))
	   ;
 	if(c!=EOF)
 		*w++=c;
	if(!isalpha(c)){
		*w='\0';
		return c;
	}
	for(;--lim>0;w++)
	  if(!isalnum(*w=getch())){
  		ungetch(*w);
  		break;
  	}
	*w='\0';
	return word[0];
} 