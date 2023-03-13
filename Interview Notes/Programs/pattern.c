
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
    int a=5;
    printf("%d,%d,%d,%d", a++ , ++a , a-- , a--);
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

/*
o/p=> 


ENTER Value of N:10
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10


*/