#include <map>
#include <set>
#include <list> 
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int compare_digits(char* a, char* b){
    n1 = atoi(a);
    n2 = atoi(b);
    if(n1 == n2)
        return 0;
    if(n1 > n2)
        return 1;
    if(n1 < n2)
        return 2;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    string number;
    cin >> number;
    for(int i = 1; i < n; i++){
        while(k--){
            if(n%2 == 0){
                if(compare_digits(s[(n/2)-i],s[(n/2)+i]) == 1){
                    s[(n/2)+i] = s[(n/2)-i];
                }
                else if(compare_digits(s[(n/2)-i],s[(n/2)+i]) == 2){
                    s[(n/2)-i] = s[(n/2)+i];
                }
            }
        }
    }
    return 0;
}
