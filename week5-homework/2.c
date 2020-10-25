 #include"ch3.h"
   #define BUF_SIZE 8
   
   int main(void){
       FILE *fd;
       struct iobuf {
           char buf[BUF_SIZE];
          char others[BUF_SIZE];
        }buffer;
        memset(&buffer,'\0',sizeof(struct iobuf));
        gets(buffer.buf);
       fprintf(stdout,"gets() get string \"%s\"\n",buffer.buf);
       fprintf(stdout,"buffer.others is \"%s\"\n",buffer.others);
       exit(0); 
  }
 

