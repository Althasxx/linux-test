#include"ch7.h"

static void callback1(void){
	printf("----------callback1----------\n");
}

static void callback2(void){
	printf("-------callback2-----------\n");
}

static void callback3(void){
	printf("------------callback3-------------\n");
}
static void __attribute__ ((constructor)) before_main(){
	printf("----------before main-----------\n");
}

static void __attribute__ ((destructor)) after_main(){
	printf("---------after main----------\n");
}

int main(){
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);
	printf("--------main exit---------\n");
	//exit(0);
	_exit(0);

}

