#include"ch6.h"

int main(){
	char buf[20];
	int ret;
	FILE *fp=fopen("./tmp.txt","w+");
	if(!fp){
		printf("Fail to open file!\n");
		exit(-1);
	}
	ret=fwrite("123",sizeof("123"),1,fp);
	fseek(fp,sizeof("123"),SEEK_SET);

	printf("We write %d byte\n",ret);

	memset(buf,0,sizeof(buf));
	ret=fread(buf,1,1,fp);
	printf("We read %s ,ret is %d\n",buf,ret);

	fwrite("456",sizeof("456"),1,fp);
	fclose(fp);
	return 0;



}