/***
IP
5
10 40 30 50 20
1 2 3 4 5

OP
32.0

***/
#include <cstdio>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;


int main() {
    int count,temp,total=0,sum=0;
    vector<pair<int,int>> v;
    pair<int, int> p;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> temp;
        p.first = temp;
        p.second = 0;
        v.push_back(p);
    }
    for(int i = 0; i < count ; i++){
        cin >> temp;
        total +=temp;
        v[i].second = temp; 
    }
    //Weighted Mean
    for(int i =0;i<count;i++){
          sum += v[i].first*v[i].second;
    }
    printf("%.1f",(float)sum/(float)total);
    return 0;
}
