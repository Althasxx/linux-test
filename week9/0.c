#include"ch9.h"
int main(void){
	int g = 0;

	FILE *fp = fopen("./out.dat","a+");
	
	pid_t pid1,pid2,pid3,pid4;
	pid1 = vfork();
	
	if(pid1 < 0){
		perror("fork failed!");
		exit(-1);
	}
	else if(pid1 == 0){
		g++;
		fprintf(fp,"ppid : %d,pid : %d,g = %d\n",getppid(),getpid(),g);
		pid3 = vfork();
		if(pid3 < 0){
			perror("fork failed!\n");
			exit(-1);
		}
		else if(pid3 == 0){
			g++;
			fprintf(fp,"ppid : %d,pid : %d,g = %d\n",getppid(),getpid(),g);
			exit(0);
		}
		else{
			wait(NULL);
			pid4=vfork();
			if(pid4<0){
				perror("fork failed!\n");
	                        exit(-1);
			}
			else if(pid4==0){
				g++;
	                        fprintf(fp,"ppid : %d,pid : %d,g = %d\n",getppid(),getpid(),g);
        	                exit(0);
			}
			else{
				wait(NULL);
				exit(0);
			}

		}
	}
	else{
		wait(NULL);
		pid2 = vfork();
		if(pid2<0){
		
		}
		else if(pid2==0){
			g++;
			fprintf(fp,"ppid : %d,pid : %d,g = %d\n",getppid(),getpid(),g);
			exit(0);
		}
		else{
			wait(NULL);
			g++;
			fprintf(fp,"ppid : %d,pid : %d,g = %d\n",getppid(),getpid(),g);
			fclose(fp);
			exit(0);
		}
	}
}


