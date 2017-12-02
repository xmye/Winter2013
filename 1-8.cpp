#include<stdio.h>
int main()
{
	int blank=0,tab=0,newline=0;
	int c;
	while((c=getchar())!=EOF)
	{
		if (c==' ')
		  blank++;
  		if(c=='\t')
  		  tab++;
  		if(c=='\n')
  		   newline++;
  		if(c=='0')
  		  break;
  
  }
	printf("%d\n%d\n%d\n",blank,tab,newline);
} 