#include <iostream>
#include <vector>
#include <map>

using namespace std;

int getMinimumUniqueSum(vector<int> arr){
    map<int,int> mymap;
    int sum = 0;
    for(int i = 1; i <=3000; i++){
        mymap[i] = 0;
    }
    
    for (std::vector<int>::iterator it = arr.begin() ; it != arr.end(); ++it){
        mymap.at(*it) += 1;
    }
    
    arr.erase( unique( arr.begin(), arr.end() ), arr.end() );
    
    for (std::vector<int>::iterator it = arr.begin() ; it != arr.end(); ++it){
        if(mymap[*it] == 1){
            sum = sum + (*it);
        }
        if(mymap[*it] > 1){
            sum = sum + (*it);
            for(int j = mymap[*it]; j > 1; j--){
                for(int i = (*it) + 1; i < 3000; i++){
                    if(mymap[i] == 0){
                        sum = sum + i;
                        mymap[i] += 1;
                        break;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> myvector;
    myvector.push_back(2);
    myvector.push_back(2);
    myvector.push_back(4);
    myvector.push_back(5);
    int result = getMinimumUniqueSum(myvector);
    cout<<result<<endl;
    return 0;
}
