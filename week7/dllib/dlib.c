#include"../ch7.h"


void dynamic_lib_call(void){
	printf("Dynamic is call!\n");
}

void sum(int max){
	int i,sum=0;
	for(i=0;i<=max;i++){
		sum+=i;
	}
	printf("max = %d,sum= %d\n",max,sum);
}
