#include<stdio.h>
#define TABLE 8
main()
{
	int c;
	int nb=0;  // 需要改变为空格的数量 
	int pos=1; //当前的位置 
	while((c==getchar())!=EOF){
		if(c=='\t'){
			nb=TABLE-(pos-1)%TABLE;  //?????
			while(nb>0){
				putchar(' ');
				pos++;
				nb--; 
			}
		}else if(c=='\n'){
			putchar(c);
			pos=1;
		}else{
			putchar(c);
			pos++;
		}
	}	
}