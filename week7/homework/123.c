#include<stdio.h>
#include<stdlib.h>
const char* name = "test_env";
const char* value = "test";
static void set_env_string()
{
        char test_env[]="test_env=test";
        //this is the wrong way
        //if(putenv(test_env)!=0)
        //this is the correct way
        if(setenv(name,value,1)!=0)
        {
                printf("Putenv is failed!\n");
        }
        printf("1.The test_env = %s\n",getenv("test_env"));
}

static void show_env_string()
{

        printf("2.The test_env = %s\n",getenv("test_env"));
}

int main()
{
        set_env_string();
        show_env_string();
        return 0;
}
