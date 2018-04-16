#include <stdio.h>

int main() {
    int n,i;
    int numa[100],numb[100],ans[100];
    char sig[100],equ;
    scanf("%d\n",&n);
    for (i=0; i<=n; i++){
        scanf("%d%c%d%c",&numa[i],&sig[i],&numb[i],&equ);
        if (sig[i]='+') ans[i]=numa[i]+numb[i];
        if (sig[i]='-') ans[i]=numa[i]-numb[i];
        if (sig[i]='*') ans[i]=numa[i]*numb[i];
        if (sig[i]='/') ans[i]=numa[i]/numb[i];
        else ans[i]=0;
    }
    for (i=0; i<=n; i++){
        printf("%d %c %d = %d",numa[i],sig[i],numb[i],ans[i]);
    }
    return 0;
}