#include <stdio.h>

int main() {
    float amount,addamount;
    printf("Enter an amount : ");
    scanf("%f",&amount);
    addamount=amount*1.05;
    printf("With tax added: $%.2f",addamount);
}