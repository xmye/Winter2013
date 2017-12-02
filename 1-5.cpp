#include <stdio.h>
int main(){
	int lower,upper,step;
	int  fahr,celsius=300;
	lower=0;upper=300;step=20;
	printf("ÎÂ¶È×ª»»\n"); 
	while(celsius>=lower){
		fahr=celsius*(9/5)+32;
		printf("%3d %6d\n",celsius,fahr);
		celsius-=step;
	}
} 