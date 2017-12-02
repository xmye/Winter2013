main(int argc,char *argv[]){
	int i;
	for(i=1;i<argc;i++)
	  printf("%s%s",argv[i],(i<argc-1)?" ":""); 
	  printf("\n");
	  return 0;
}

main(int argc,char *argv[]){
	while(--argc>0)
	  printf("%s%s",*++argv,(argc>1)?" ":"");
} 

#include<stdio.h>
#include<string.h>
#define MAXLINE 100

int getline(char *line,int max);

//find:print lines that match pattern from 1st arg
main(int argc,char *argv[]){
	char line[MAXLINE];
	int found=0;
	if(argc!=2) 
	  printf("usage:find pattern\n");
 	else  
 	  while(getline(line,MAXLINE)>0)
 	    if(strstr(line,argv[1]!=NULL)){
   	 	   printf("%s",line);
 	       found++;
    	 }
      return found;
}