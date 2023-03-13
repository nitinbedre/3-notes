/*

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<stdio.h>
int main(char arg[]) {
    int row = 0, col = 0, number = 0;
    printf("ENTER Value of N:");
    scanf("%d", &number);

    for(row = 1 ; row <= number ; row++) {
        for(col = 1 ; col <= row ; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}