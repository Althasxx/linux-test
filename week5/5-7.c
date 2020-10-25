#include"ch3.h"
int main(){
	
	FILE *fp;
	int fd;
	fp=fopen("./ch3.h","r");
	fd=fileno(fp);
	printf("fd=%d\n",fd);
	



	return 0;
}
