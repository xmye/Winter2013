#include<stdio.h>
#define TABLE 8
main()
{
	int c;
	int nb=0;  // ��Ҫ�ı�Ϊ�ո������ 
	int pos=1; //��ǰ��λ�� 
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