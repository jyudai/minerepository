#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp,*in;
    int ch;
    int index=0;
    char file[40];
    char things[80];
    puts("please enter the name of the file.");
    scanf("%s",file);
    if((fp=fopen(file,"a+"))==NULL)
    {
        puts("failed to open the file");
        exit(EXIT_FAILURE);
    }
    while(getchar()!='\n');
    puts("please enter something");
    scanf("%s",things);
    fwrite(things,strlen(things),1,fp);
    if((fclose(fp))!=0)
    {
        fprintf(stderr,"failed to close the file\n");
        exit(EXIT_FAILURE);
    }

}
