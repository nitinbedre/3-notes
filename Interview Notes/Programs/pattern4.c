#include<stdio.h>
int main(char arg[]) {
    int row = 0, col = 0, number = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    for(row = 1 ; row <= number ; row++) {
        for(col = 1 ; col <= number - row ; col++) {
            printf("  ", col);
        }

        int k = row*2 - 1;
        int value = row;
        for(col = 1 ; col <= k ; col++) {
            printf("%d ", value);           
            if(col < row) {
                value++;
            } else {
                value--;
            }
        }
        printf("\n");
    }
}

/* 
o/p =>
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5


*/