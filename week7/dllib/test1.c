#include"../ch7.h"

int main(){
	void *dlib=dlopen("./libdlib.so",RTLD_NOW);
	if(!dlib){
		printf("dlopen failed!\n");
		exit(-1);
	}
	void(*dfunc) (void)=dlsym(dlib,"dynamic_lib_call");
	if(!dfunc){
		printf("dfunc is faild!\n");
		exit(-1);
	}
	dfunc();
	
	void (*dsum) (int)=dlsym(dlib,"sum");
	if(!dsum){
		printf("dsum is faild!\n");
		exit(-1);
	}
	dsum(10);

	dlclose(dlib);
	return 0;
}
