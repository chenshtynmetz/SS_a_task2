#include <stdio.h>
#include "my_mat.h"
#define SIZE 10


int matrix[SIZE][SIZE];

void make_matrix(){
    // printf("enter the value of the matrix: ");
    for(int i= 0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            scanf("%d", &(matrix[i][j]));
        }
    }
}
int find_minimum(int a, int b){
    if(a<b) return a;
    else return b;
}

void have_trial(){
    int i;
    int j;
    scanf("%d%d", &i ,&j);
    if(matrix[i][j] == 0) {
        printf("False");
        // return 0;
    }
    printf("True");
    // return 1;
}

void short_trial(){
    int i, j;
    scanf("%d%d", &i , &j);
    if(matrix[i][j] == 0){
        printf("-1\n");
    }
    else{
        for(int k=0; k<SIZE; k++){
            for(int h=0; h<SIZE; h++){
                for(int r=0; r<SIZE; r++){
                    matrix[h][r] = find_minimum((int)(matrix[h][r]), (int)(matrix[h][k] + matrix[k][r]));
                }
            }
        }
            printf("%d\n", (matrix[i][j]));
    }
}

// void main(){
//     make_matrix();
//     // int x= min(2 ,1);
//     // printf("%d" , x);
//     for(int i= 0; i<SIZE; i++){
//         for(int j=0; j<SIZE; j++){
//             printf(" %d", matrix[i][j]);
//         }  printf("\n");
//     }
//     have_trial();
//     short_trial();
// }
