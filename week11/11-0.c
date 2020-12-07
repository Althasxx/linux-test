#include"ch11.h"
#include"my.h"

int main(){
	pid_t ch1,ch2,ch11,ch21;
	ch1 = fork();
	if(ch1<0){
		perror("fork ch1 error!\n");
		exit(-1);
	}
	else if(ch1==0){
		
		printf("child ch1 : pid = %d, ppid = %d\n",getpid(),getppid());
		prtinfo("ch1",getpid());
		ch11 = fork();
		if(ch11<0){
			perror("fork ch11 error!\n");
			exit(-1);
		}
		else if(ch11==0){
			printf("child ch11: pid = %d, ppid = %d\n",getpid(),getppid());
			prtinfo("ch11",getpid());
			exit(0);
		}else{
			wait(NULL);
			exit(0);
			}
	}
	else{
		wait(NULL);
		ch2 = fork();
		if(ch2<0){
			perror("fork ch2 error!\n");
			exit(-1);
		}
		else if(ch2==0){
			printf("child ch2 : pid = %d, ppid = %d\n",getpid(),getppid());
			prtinfo("ch2",getpid());
			ch21 = fork();
			if(ch21<0){
				perror("fork ch21 error!\n");
				exit(-1);
			}else if(ch21==0){
				printf("child ch21 : pid = %d, ppid = %d\n",getpid(),getppid());
				prtinfo("ch21",getpid());
				exit(0);
			}else{
			wait(NULL);	
			exit(0);
			}
		}
	else{
		wait(NULL);
		FILE *fp;
		fp = fopen("./log.dat","r");
		printf("parent : pid = %d\n",getpid());
		prtinfo("parent",getpid());
		printFile(fp);
		return 0;
		}			
	}
}

