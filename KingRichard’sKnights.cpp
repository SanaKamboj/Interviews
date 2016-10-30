#include <cmath>
#include <cstdio>
#include <vector> 
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int s;
    int a, b, d, l;
    long long int w;
    cin>>n;
    cin>>s;
    long long int k[n][n];
    long long int counter = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            k[i][j] = counter;
            counter++;
        }
    }
    
    while(s--){
        cin>>a;
        cin>>b;
        cin>>d;
        long long int temp[a+d][b+d];
        for(int i = 0; i <= d; i++){
            for(int j = 0; j <= d; j++){
                temp[j][i] = k[i+a-1][j+b-1];
            }
        }
        for(int i = 0; i <= d; i++){
            for(int j = 0; j <= d; j++){
                k[i+a-1][j+b-1] = temp[i][d-j];  
            }
        }
    }
    
    cin>>l;
label:
    while(l--){
        cin>>w;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(k[i][j] == w){
                    printf("%d %d\n", i+1, j+1);
                    goto label;
                }
            }
        }
        
    }
    
    return 0;
}
