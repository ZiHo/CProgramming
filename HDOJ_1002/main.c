/*
 * This is a C program started editing on 2018/3/7
 * End on 2018/3/14
 * It is edited for HDOJ Problem No.1002
 * Problem -- No.3
 */
#include <stdio.h>
#include <string.h>
int main() {
    int count,i,setc,lena,lenb,a,b,maxlen[20]={0},minlen;
    char char1[20][2000],char2[20][2000];
    int numa[20][2000]={0},numb[20][2000]={0},ans[20][2000]={0};
    scanf("%d",&count);
    for(setc=0; setc<count; setc++) {
        scanf("%s%s", char1, char2);
        lena = strlen(char1);
        lenb = strlen(char2);
        if (lena > lenb) maxlen[setc] = lena; else maxlen[setc] = lenb;
        if (lena < lenb) minlen = lena; else minlen = lenb;
        //printf("%d,%d\n",lena,lenb);
        //printf("%c %c",char2[2],char1[1]);
        for (a = 0; a < lena; a++)
            numa[setc][a] = (int) char1[setc][a] - '0';
        for (a = 0; a < lenb; a++)
            numb[setc][a] = (int) char2[setc][a] - '0';
        if (lena != lenb) {
            if (lena > lenb) {
                for (i = lenb; i >= 0; i--) {
                    numb[setc][lena - lenb + i] = numb[setc][i];
                    numb[setc][i] = 0;
                }
                for (i = 0; i <= lena - lenb; i++) numb[setc][i] = 0;
            } else
                for (i = lena; i >= 0; i--) {
                    numa[setc][lenb - lena + i] = numa[setc][i];
                    numa[setc][i] = 0;
                }
            for (i = 0; i < lenb - lena; i++) numa[setc][i] = 0;

        }
        for (i = 0; i <= maxlen[setc]; i++) ans[setc][i] = numa[setc][i] + numb[setc][i];

        for (i = maxlen[setc]; i >= 1; i--)
            if (ans[setc][i] >= 10) {
                ans[setc][i - 1] += ans[setc][i] / 10;
                ans[setc][i] = ans[setc][i] % 10;
            }
    }
    for(setc=0; setc<count; setc++) {
        printf("Case %d:\n",setc+1);
        printf("%s + %s = ",char1[setc],char2[setc]);
        for (i = 0; i < maxlen[setc]; i++) printf("%d", ans[setc][i]);
        printf("\n\n");
    }
}
