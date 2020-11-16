#include"../ch8.h"

int main(void){
	void *fpt=dlopen("./libdlib.so",RTLD_NOW);
	if(!fpt){
		printf("dlopen failed!\n");
		exit(1);
	}
	void(*fp)(void)=dlsym(fpt,"mysort");
	if(!fp){
		printf("DLsym failed!\n");
		exit(1);
	}
	fp();
	dlclose(fpt);
	return 0;

}
