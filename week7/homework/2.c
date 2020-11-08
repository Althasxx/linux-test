#include <stdio.h>
#define N 10

/*By assigning an initial value to the i variable,
the i variable will not be overwritten.*/

int a[N],i=10;
int main()
{

        for(i=0;i<N;i++)
        {
                a[i] = i + 1;

        }

        a[N] = 123456789;
        printf("i = %d\n",i);
        printf("%d\n",a[i]);
        return 0;
}
