#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
 
int main(){
    string time;
    string hours;
    string minutes;
    string seconds;
    string ap;
    cin >> time;
    hours = time.substr(0,time.find(":"));
    minutes = time.substr(time.find(":") + 1, 2);
    seconds = time.substr(time.find(":") + 4, 2);
    ap = time.substr(time.find(":") + 6, 2);
    if(ap.compare("PM") == 0 && hours.compare("12") != 0){
        int hh = stoi(hours);
        hh += 12;
        ostringstream oss;
        oss << hh;
        hours = oss.str();
    }
    if((ap.compare("AM") == 0) && hours.compare("12") == 0){
        hours = "00";
    }
    time = hours + ":" + minutes + ":" + seconds;
    cout<<time;
    
    return 0;
}
