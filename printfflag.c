#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char flag[100];

int main(){
    char buf[0x100] = {0, };

    FILE* fp = fopen("/home/ctf/flag.txt","r");
	fscanf(fp, "%s", flag);

    printf("어디 한번 플래그를 출력해보시지!\n");
    printf("Your Input : ");
    scanf("%s", buf);

    return 0;
}