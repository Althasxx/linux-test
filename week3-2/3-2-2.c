#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main(){
	FILE *fp;
	
	fp = fopen("./test1.txt","w");
	char c;
	scanf("%c",&c);
	fprintf(fp,"%c\n",c);
	return 0;
}
