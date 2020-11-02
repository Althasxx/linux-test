#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<unistd.h>
typedef struct user{
	int id;
	char name[8];
	char htel[12];
	char tel[12];
}rec;

void input();
void output();
void save(rec*,const char*);
void mysort();
void randdat();
