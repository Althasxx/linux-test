#include"../ch8.h"

void dynamic_lib_fun_call(void){
	printf("dynamic lib fun called!\n");

}

void Sort(int *arr, int size)
{
    int i, j, k, tmp;
    for (i = 0; i < size - 1; i++) {
        k = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        tmp = arr[k];
        arr[k] = arr[i];
        arr[i] = tmp;
    }
}

void mysort(void){
	int n,i;
	printf("输入排序数字个数：");
	scanf("%d",&n);
	int a[n];
	printf("输入你想排序的数字：");
    	for (i = 0; i < n; i++) {
        	scanf("%d",&a[i]);
        }
        Sort(a,n);
        
        for (i = 0; i < n; i++) {
        	printf("%d    ",a[i]);
        }
	printf("\n");
}


