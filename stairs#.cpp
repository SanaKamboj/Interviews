#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int j = n; j > 0; j--){
        for(int i = j; i > 1; i--){
            printf(" ");
        }
        for(int k = n-j+1; k > 0; k--){
            printf("#");
        }
        printf("\n");
    } 
    
    return 0;
}
