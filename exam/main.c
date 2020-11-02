#include"my.h"

int main(){
	int flag;
	int i;
	i=1;
	while(i){
		system("clear");
		printf("1:从键盘输入\n2:显示\n3:按姓名进行排序\n4:随机生成数据写入\n5:退出程序\n");
		scanf(" %d",&flag);
		switch(flag){
			case 1:
				input();
				break;
			case 2:
				output();
				break;
			case 3:
				mysort();
				output();
				break;
			case 4:
				randdat();
				output();
				break;
			case 5:
				i=0;
		}
		printf("任意建继续。。\n");
 	  	getchar();
        getchar();
		system("clear");	
	}
	return 0;
}
