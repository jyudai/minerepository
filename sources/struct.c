#include<stdio.h>
struct first{
    char hello[30];
    char name[40];
    char end[7];
};
int main(void)
{
    struct first new={
        "hello world",
        "my name is jyudai",
        "bye"
    };
    printf("%s\n",new.hello);
    printf("%s\n",new.name);
    printf("%s\n",new.end);
    return 0;
}
