#include<stdio.h>
int main()
{
	int a,b;
	printf("please enter a figure:\n");
	while((b=scanf("%d",&a))!=EOF)
		{
			if(b!=1)
				{
					printf("try again:\n");
					while(getchar()!='\n');
				}
			else
				break;
		}
	printf("figure is %d\n",a);
	return 0;
}
