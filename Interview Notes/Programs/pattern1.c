#include<stdio.h>
int main(char arg[]) {
    int row = 0, col = 0, number = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    for(row = number; row > 0 ; row--) {
        for(col = 1 ; col <= row ; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }
}

/*

o/p => 


C:\Users\hp\Downloads\Practice\Interview Notes\Programs>gcc pattern1.c

C:\Users\hp\Downloads\Practice\Interview Notes\Programs>a
Enter Number: 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

C:\Users\hp\Downloads\Practice\Interview Notes\Programs>
*/