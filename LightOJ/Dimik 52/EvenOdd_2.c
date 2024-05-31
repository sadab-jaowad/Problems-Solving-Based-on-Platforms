
#include <stdio.h>

int main() {
    // Your c code here
    int input;
    scanf("%d\n",&input);
    long long arr[input];
    for(int i=0;i<=input-1;i++)
    {
        scanf("%lld",&arr[i]);
    }
     for(int i=0;i<=input-1;i++)
    {
        if(arr[i]%2==0){
            printf("even\n");
        }

         else{
            printf("odd\n");
         }
    }
    return 0;
}
