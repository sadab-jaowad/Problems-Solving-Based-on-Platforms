#include<stdio.h>
#define MAX 100

int main(){

    char s[MAX];
    fgets(s,MAX,stdin);
    printf("Hello, World!\n");
    puts(s);
    return 0;

}
