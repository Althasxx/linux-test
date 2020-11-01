#ifndef _TEST_H_
#define _TEST_H_
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

struct user{
	int id;
	char name[8];
	char htel[12];
	char tel[12];
};


void save(struct user *rec);
int input(void);
#endif
