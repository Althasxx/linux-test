#include"ch11.h"

int main(){
	pid_t pid1;
	pid1 = fork();
	if(pid1<0){
		perror("fork pid1 error!\n");
		exit(-1);
	}
	else if(pid1==0){
		printf("child pid1 : pid = %d, ppid = %d\n",getpid(),getppid());
		exit(0);
	}
	else{
		pid_t pid2;
		pid2 = fork();
		if(pid2<0){
			perror("fork pid2 error!\n");
			exit(-1);
		}
		else if(pid2==0){
			printf("child pid2 : pid = %d, ppid = %d\n",getpid(),getppid());
			while(1);
			exit(0);
		}
	else{
		int s1,s2,r1,r2;
		r1=wait(&s1);
		r2=wait(&s2);
		if(WECITED(&s1)){
			printf("pid1 %d\n",r1);
		
		}
		if(r1==pid1){
			printf("pid1 %d\n",r1);
		}else{
			printf("pid2 %d\n",r1);
		}
		if(r2==pid1){
			printf("pid1 %d\n",r2);
		}else{
			printf("pid2 %d\n",r2);
		}	
		return 0;
		}			
	}
}

