#include"ch10.h"

int main(){
	int r;
	r = fork();
	if(r<0){
		perror("fork failed!\n");
		exit(-1);
	}else if(r==0){
		execl("./test","./test","hello","world",NULL);
		exit(0);
	}else{
		wait(NULL);
		printf("parent : pid = %d,r = %d\n",getpid(),r);
		return 0;
	}

}
