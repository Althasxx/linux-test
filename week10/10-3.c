#include"ch10.h"


int main(){
	int r1,r2,r3,r11=1;
	r1=vfork();
	
	if(r1<0){
		perror("fork failde!\n");
		exit(-1);
	}else if(r1==0){
		r11=fork();
		if(r11<0){
			perror("fork failed!\n");
		}else if (r11==0){
			
			printf("child 11 : pid = %d, ppid = %d\n",getpid(),getppid());
			exit(0);
		}
		wait(NULL);
		printf("child 1 : pid = %d, ppid = %d\n",getpid(),getppid());
		exit(0);
	}
	else{
		wait(NULL);
		r2=fork();
		if(r2<0){
			perror("fork failed!\n");
		}
		else if(r2==0){
			printf("child 2 :pid = %d, ppid = %d\n",getpid(),getppid());
			exit(0);
		}else{
			wait(NULL);
			r3=fork();
			if(r3<0){
			perror("fork failed!\n");
			}
			else if(r3==0){
			printf("child 3 :pid = %d, ppid = %d\n",getpid(),getppid());
			exit(0);
			}else{
				
				wait(NULL);
				printf("parent : pid =%d, r1 = %d, r2 = %d, r3 = %d, r11 = %d\n",getpid(),r1,r2,r3,r11);
				return 0;
				}
		}
	}
}
