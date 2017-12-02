#include<stdio.h>
#define MaxLine 30
#define n 3
int main()
{
	int c;
	int s[MaxLine];
	int count=0;
	for(int i=0;i<MaxLine-1;i++) 
	{
	while((c==getchar())!=EOF)
	{
		if(c=='\t')
		{
		   	for(int j=1;j<n;j++)
  	   		{
		   	  	s[i]=' ';
		   	     i++;
		   	     count++;
   	   		}
		}else{
			s[i]=c;
			count++;
		}
		if(c='0')
		 break;
	}
	for(int i=0;i<count;i++){
		printf("%d",s[i]);
	}
	}
	return 0;
} 