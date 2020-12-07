#pragma once
#include"ch11.h"

void prtinfo(char *p,int n){
	FILE *fp;
	if(access("./log.dat",F_OK)!=0){
		fp=fopen("./log.dat","w");
		fclose(fp);
		fp=NULL;
	}
	
	fp = fopen("./log.dat","a+");
	time_t t;
	time(&t);
	fprintf(fp,"%s : pid = %d,time = %s \n",p,n,ctime(&t));
	fclose(fp);
}
