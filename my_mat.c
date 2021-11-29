#include <stdio.h>
#include "my_mat.h"
#define SIZE 10


int matrix[SIZE][SIZE];
int have_short = 0;

void make_matrix(){
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

// void short_trial(){
//     int i, j;
//     scanf("%d%d", &i , &j);
//     // if(matrix[i][j] == 0){
//     //     printf("-1\n");
//     // }
//     // else{
//         for(int k=0; k<SIZE; k++){
//             for(int h=0; h<SIZE; h++){
//                 for(int r=0; r<SIZE; r++){
//                     if(matrix[h][r] != 0 && matrix[h][k] != 0 && matrix[k][r] != 0){
//                         matrix[h][r] = find_minimum((int)(matrix[h][r]), (int)(matrix[h][k] + matrix[k][r]));
//                 }
//                 else{
//                     matrix[h][r] = matrix[h][k] + matrix[k][r];
//                 }
//             }
//             }
//         }
//             if(matrix[i][j] == 0)
//                 printf("-1\n");
//             else
//                 printf("%d\n", (matrix[i][j]));
    
// }

int short_trial(){
    int copy_mat[SIZE][SIZE];
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            copy_mat[i][j] = matrix[i][j];
        }
    }
    // int ans;
    int i, j;
    scanf("%d%d", &i , &j);
    // if(matrix[i][j] == 0){
    //     printf("-1\n");
    // }
    // else{
        for(int k=0; k<SIZE; k++){
            for(int h=0; h<SIZE; h++){
                for(int r=0; r<SIZE; r++){
                    if(h == r) {
                        continue;
                    }
                    if(copy_mat[h][k] != 0 && copy_mat[k][r] != 0){
                        if(copy_mat[h][r] == 0 || copy_mat[h][r] > (copy_mat[h][k] + copy_mat[k][r]))
                        // copy_mat[h][r] = find_minimum((int)(copy_mat[h][r]), (int)(copy_mat[h][k] + copy_mat[k][r]));
                            copy_mat[h][r]= copy_mat[h][k] + copy_mat[k][r];
                 }
                // else
                // // else if(matrix[h][k] != 0 && matrix[k][r] != 0){
                //     matrix[h][r] = matrix[h][k] + matrix[k][r];
                // }
                // else{
                //     matrix[h][r] = 0;
                // }
            }
            }
        }
        return copy_mat[i][j];
            // if(copy_mat[i][j] <= 0){
            //     ans = -1;
            // }
            // else{
            //     ans = copy_mat[i][j];
            // } 
            // return ans;
}


void print_short_trial(){
    int ans = short_trial();
    if (ans == 0)
        printf("-1\n");
    else
        printf("%d\n", ans);
}

void have_trial(){
    int i;
    int j;
    scanf("%d%d", &i ,&j);
    // if(matrix[i][j] == 0) {
    //     printf("False\n");
    // }
    // else{
    // printf("True\n");
    // }
    if(i == j) {
        printf("False\n");
        return;
    }
    if(matrix[i][j] == 0 ){
        if(have_short == 0){
        int ans = short_trial();
        have_short = 1;
        if(ans <= 0){ 
        printf("False\n");
    }
    else{
            printf("True\n");
        }
    }
        else if(have_short == 1){
              printf("False\n");
    }
    }
    else{
            printf("True\n");
    }


}
