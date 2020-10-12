#include"ch2.h"
int main(int argc,char* argv[]){
	FILE  *fp;
	int i;
	if((fp=fopen("test1.txt","w"))==NULL)
		perror("open failed!\n");
	for(i=1;i<argc;i++){
		fwrite(argv[i],1,strlen(argv[i]),fp);
		fwrite("",1,1,fp);
		printf("[%d] : \t %s \n",i,argv[i]);
	}
	fwrite("\n",1,1,fp);
	fclose(fp);
	return 0;
}
