#include"ch3.h"
int main(){
	int fd,n,i;
	char buf;
	fd=open("./test.dat",O_CREAT|O_TRUNC|O_WRONLY,0644);
	for(i=0;i<5;i++){
		srand(time(0));
		n=rand()%26;
		buf=(char)('A'+n);
		printf("write2:%c\n",buf);
		write(fd,&buf,1);
		lseek(fd,10,SEEK_SET);
		sleep(1);
	}
	close(fd);
}