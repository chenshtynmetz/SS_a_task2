#include <stdio.h>
#include "my_mat.h"
 int main(){
     char input;
     scanf("%c", &input);
     while(input != 'D'){
         if(input == 'A')
             make_matrix();
         if(input == 'B')
            have_trial();
         if(input == 'C'){
            short_trial();
            // printf("\n");
         }
        scanf("%c", &input); 
     }
     return 1;
 }
