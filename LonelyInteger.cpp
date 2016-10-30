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

int lonelyinteger(vector <int> a) {
    map<int,int> check_ints;
    for (vector<int>::iterator it = a.begin() ; it != a.end(); ++it){
        check_ints[*it] += 1;        
    }
    for(map<int,int>::iterator it = check_ints.begin(); it != check_ints.end(); ++it){
        if(it->second != 2){
            return it->first;
        }
    }
    return 0;
}

int main() {
    int res;
    
    int a_size;
    cin >> a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> a;
    int a_item;
    for(int a_i=0; a_i<a_size; a_i++) {
        cin >> a_item;
        a.push_back(a_item);
    }
    
    res = lonelyinteger(a);
    cout << res;
    
    return 0;
}
