#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>
#include <vector>
#include <queue>

using namespace std;

void GenerateStringsWithPattern1(string& pattern, vector<string>& vec)
{
    queue<string> q;
    q.push(pattern);

    while(!q.empty()){
        string str = q.front();
        q.pop();

        int idx = str.find('?');

        if(idx != string::npos){
            str[idx] = '0';
            q.push(str);
            str[idx] = '1';
            q.push(str);
        }
        else{
            vec.push_back(str);
        }
    }
}

int main(int argc, char* argv[])
{
    vector<string> testCases;
    testCases.push_back("1?00?101");
    testCases.push_back("1??0?101");
    testCases.push_back("?");
    testCases.push_back("??");
    testCases.push_back("???");
    testCases.push_back("1");
    testCases.push_back("101");

    for(int i = 0; i < testCases.size(); ++i){
        vector<string> output;
     
        cout << "---------------------------" << endl;
        cout << "The pattern is " << testCases[i] << endl;
        GenerateStringsWithPattern1(testCases[i], output);
        copy(output.begin(), output.end(), ostream_iterator<string>(cout, " "));
        cout << endl;
    }

    return 0;
}
