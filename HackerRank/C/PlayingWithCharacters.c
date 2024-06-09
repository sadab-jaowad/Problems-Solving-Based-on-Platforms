#include<stdio.h>
#define MAX_LEN 1000
int main(){


    char ch, s[MAX_LEN], sen[MAX_LEN];

    scanf("%c\n",&ch);
    scanf("%s\n",s);
    fgets(sen,MAX_LEN,stdin);
    printf("%c\n",ch);
    printf("%s\n",s);
    puts(sen);
    return 0;

}
