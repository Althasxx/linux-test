#include"my.h"

int input(){
	int i;
	struct user *rec;
	printf("请输入ID：");
	scanf("%d",&(rec->id));
	printf("请输入NAME：");
	scanf("%s",&(rec->name));
	printf("请输入HTEL：");
	scanf("%s",rec->htel);
	printf("请输入TEL：");
	scanf("%s",rec->tel);
	save(rec);
	return 0;

}

void save(struct user *rec){
	FILE *fp;
	fp=fopen("user.dat","w+");
	fseek(fp,0,SEEK_END);
	fprintf(fp,"%d %s %s %s",rec->id,rec->name,rec->htel,rec->tel);
	fclose(fp);
}
