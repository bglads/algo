/***
IP
23,4,56

OP
23
4
56
***/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> v;
    int temp;
    char c;
    stringstream s(str);
    while(s >> temp){
        v.push_back(temp);
        s >> c;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
