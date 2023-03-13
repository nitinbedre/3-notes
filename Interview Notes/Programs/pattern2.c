#include<stdio.h>
int main(char arg[]) {
    int row = 0, col = 0, number = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    for(row = 1 ; row <= number ; row++) {
        for(col = 1 ; col <= number-row ; col++) {
            printf("  ", col);
        }

        for(col = 1 ; col <= 2*row-1 ; col++) {
            printf("%d ", col);
        }

        
        printf("\n");
    }
}


/*

o/p => 

C:\Users\hp\Downloads\Practice\Interview Notes\Programs>a
Enter Number: 7
            1
          1 2 3
        1 2 3 4 5
      1 2 3 4 5 6 7
    1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7 8 9 10 11
1 2 3 4 5 6 7 8 9 10 11 12 13

C:\Users\hp\Downloads\Practice\Interview Notes\Programs>

*/