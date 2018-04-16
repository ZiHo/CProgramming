/*
 * This is a C program edit on 2018/3/7
 * It is edited for HDOJ Problem No.1001
 * Problem -- No.2
 */
#include <stdio.h>

int main() {
    int n,sum,i;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=1; i<=n; i++)
            sum=sum+i;
        printf("%d\n\n",sum);
    }
    return 0;
}