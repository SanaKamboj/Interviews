#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */

int xor2Ints(int x, int y){
 
    int res = 0;
    for(int i = 10; i>=0; i--){
        bool b1 = x & (1 << i);
        bool b2 = y & (1 << i);       
        bool xorbit = b1^b2;
        
        res = res << 1;
        res |= xorbit;      
    }
    
    return res;
}

int maxXor(int l, int r) {
    vector<int> a;
    for(int i = l; i<r; i++){
        for(int j = i+1; j<=r; j++ ){
            a.push_back(xor2Ints(i,j));
        }
    }
    vector<int>::iterator result;
    result = max_element(a.begin(), a.end());
    return *result;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}

int myXOR(int x, int y)
{
    int res = 0; // Initialize result
     
    // Assuming 32-bit Integer
    for (int i = 31; i >= 0; i--)                    
    {
       // Find current bits in x and y
       bool b1 = x & (1 << i);
       bool b2 = y & (1 << i);
        
        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);         
 
        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}
