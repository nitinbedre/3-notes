#include<stdio.h>
int main(char arg[]) {
    int row = 0, col = 0, number = 0;
    char A = 'A';
    printf("\n Enter Number of rows in array: \n ");
    scanf("%d", &row);
    printf("\n Enter Number of columns in array: \n ");
    scanf("%d", &col);
    char name[row][col] ;
    for(int i = 0; i < row ; i++) {
        for(int j = 0 ; j < col ; j++, A++) {
            name[i][j] = A;
        }
    }

    for(int i = 0; i < row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            printf("%c ", name[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
op=> 

C:\Users\hp\Downloads\Practice\Interview Notes\Programs>a

 Enter Number of rows in array:
 6

 Enter Number of columns in array:
 6
A B C D E F
G H I J K L
M N O P Q R
S T U V W X
Y Z [ \ ] ^
_ ` a b c d


*/