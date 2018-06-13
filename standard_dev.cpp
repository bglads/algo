/***
OP
5
10 40 30 50 20

IP
14.1
***/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int count;
    float temp,total=0;
    vector<float> v;
    float sd;
    cin >> count;
    for(int i=0;i<count;i++){
        cin >> temp;
        v.push_back(temp);
        total+=temp;
    }
    int mean=(float)total/(float)count;
    total = 0;
    for(int i=0;i<count;i++){
        total+=pow((float)(v[i]-mean), 2.0);
    }
    sd=sqrt((float)total/(float)count);
    printf("%.1f",sd);
    return 0;
}
