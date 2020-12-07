#include"ch9.h"

int main(){
	int g=0;
	pid_t pid;
	pid=vfork();
	if(pid<0){
		perror("Fork Failed!\n");
		exit(-1);
	}

}
