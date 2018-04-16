#include <stdio.h>
int main () {
    int odd, lines = 0;
    printf("please input a odd number:");
    scanf("%d", &odd);// read the user input
    if (odd % 2 == 0){
        printf("Invalid Input\n");
        return -1;
    }
    lines = (odd + 1) / 2;// calculate the lines will output
    for (int i = lines; i > 0; i--){
        for (int k = i - 1; k > 0; k--){
            printf(" ");//print the space before the stars, numbers based on number i
        }
        for (int j = 0; j < (odd - 2 * i + 2); j++){
            printf("*");//print the stars, numbers based on user's input odd
        }
        printf("\n");
    }
    return 0;
}