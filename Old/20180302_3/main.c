#include <stdio.h>

int main() {
    int count, Money20, Money10, Money5, Money1;
    printf("Enter a dollar amount :");
    scanf("%d",&count);
    Money20=count/20;
    count=count-20*Money20;
    Money10=count/10;
    count=count-10*Money10;
    Money5=count/5;
    count=count-5*Money5;
    Money1=count;

    printf("$20 Bills: %d\n",Money20);
    printf("$10 Bills: %d\n",Money10);
    printf("$ 5 Bills: %d\n",Money5);
    printf("$ 1 Bills: %d\n",Money1);
}