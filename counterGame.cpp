//cpp
#include <bits/stdc++.h>
using namespace std;

unsigned long long msb(unsigned long long n) {
    for(int idx = 63; idx >= 0; idx--) {
        if((n & (1ll<<idx)) != 0)
            return 1ll << idx;
    }
    return 0;
}

bool win(unsigned long long n) {
    assert(n > 0);
    if(n == 1)
        return false;
    unsigned long long nextStep = ((n&(n-1)) == 0 ? n>>1 : n-msb(n));
    return !win(nextStep);
}


int main()
{
    unsigned long long num;

    int test;
    cin >> test;
    while(test--) {
        cin >> num;
        assert(num >= 1);
        cout << (win(num)?"Louise": "Richard");
        cout << "\n";
    }



    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "assert.h"
using namespace std;

unsigned long long findLargestN(unsigned long long n) {
    for(int idx = 63; idx >= 0; idx--) {
        if((n & (1ll<<idx)) != 0)
            return 1ll << idx;
    }
    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    unsigned long long int n;
    cin>>t;
    for (int i = 0; i < t; i++){
        bool turn = false;
        cin>>n;
        assert(n >= 1);
        while(n > 1){
            turn = !turn;
            if(powerOfTwo(n))
                n = n/2;
            else
                n = n - findLargestN(n);
        }
        if(!turn)
            cout<<"Richard\n";
        else
            cout<<"Louise\n";    
    }
    
    return 0;
}







#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool powerOfTwo(unsigned long long int x){
    float r;
    r = log2(x);
    if(floor(r) == r){
        return true;
    }
    return false; 
}

unsigned long long int findLargestN(unsigned long long int x){    
    while(!powerOfTwo(x)){
        x--;
    }
    return x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    unsigned long long int n;
    cin>>t;
    bool turn = false;
    for (int i = 0; i < t; i++){
        cin>>n;
        if(n == 1){
            cout << "Louise\n";
        }
        else{
            while(n != 1){
                turn = !turn;
                if(powerOfTwo(n))
                    n = n/2;
                else
                    n = n - findLargestN(n);
            }
            if(!turn)
                cout<<"Richard\n";
            else
                cout<<"Louise\n";
        }        
    }
    
    return 0;
}
