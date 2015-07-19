#include<stdio.h>
#include<stdlib.h>
int main()
{
	int eof;
	FILE *fp;
	char file[40];
	printf("input the filename\n");
	scanf("%s",file);
	if((fp=fopen(file,"r+"))==NULL)
	{
		fprintf(stderr,"can't open file\n");
		exit(EXIT_SUCCESS);
	}
	while((eof=getc(fp))!=EOF)
		putchar(eof);
	if(fclose(fp)!=0)
	{
		puts("error to close the file");
	}
	return 0;

}
