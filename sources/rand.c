#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("please enter a figure from 1 to 6(q to quit):\n");
	while(scanf("%d",&b)!=0)
		{
			while(getchar()!='\n');
			srand((unsigned int)time(0));
			a=rand()%6+1;
			printf("the result is %d\n",a);
			if(a==b)
				printf("lucky dog!\n");
			else
				printf("Don't be sad!\n");
		}
	printf("bye!\n");
	return 0;
}
