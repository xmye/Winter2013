#include<stdio.h>
//��дת��ΪСд 
//�õ��ַ����жϣ�ת��  
int lower(int);
main(){
     printf("%c",lower('A'));
} 

int lower(int c){
	return (c<='Z'&&c>='A'?c+'a'-'A':c);
}