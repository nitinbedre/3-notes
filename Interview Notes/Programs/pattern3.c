#include<stdio.h>
int main(char arg[]) {
    int row = 0, col = 0, number = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    for(row =  number; row > 0 ; row--) {
        
        // space
        for(col = row ; col < number ; col++) {
            printf("  ");
        }
        int k = row*2-1 ;
        for(col = 0; col < k; col++) {
            printf("* ");
        }
        printf("\n");
    }
}

/*
o/p=> 

C:\Users\hp\Downloads\Practice\Interview Notes\Programs>a
Enter Number: 7
* * * * * * * * * * * * *
  * * * * * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

*/