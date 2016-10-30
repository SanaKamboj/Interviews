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
    int a[n][n];
    int sum_p = 0;
    int sum_s = 0;
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }
    for(int i = 0; i < n; i++){
        sum_p += a[i][i];
        sum_s += a[i][n-1-i];
    }
    printf("%d", abs(sum_p-sum_s));     
    return 0;
}
