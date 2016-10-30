#include <cmath>
#include <cstdio> 
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int n;
    
    n = s.size();
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if(s[i] == s[i+1]){
                s.erase(i,2);
            }
        }
    }
    
    if(s.empty()){
        cout<<"Empty String";
    }
    else{
        cout<<s;
    }
            
    return 0;
}
