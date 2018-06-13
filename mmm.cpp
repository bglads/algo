//Mean, Median, Mode
/***
IP
10
64630 11735 14216 99233 14470 4978 73429 38120 51135 67060

OP
43900.6
44627.5
4978
***/

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float temp, total=0;
    int count;
    float mean, mode, median;
    vector<float> v;
    cin >> count;    
    for(int i = 0 ; i < count ; i ++ ){
        cin >> temp;
        total += temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    mean = total/count;
    // Mean
    printf("%.1f\n",mean);
    // Median
    if(count%2==0){
        printf("%.1f\n", (v[count/2]+v[count/2-1])/2);
    }
    else{
        printf("%.1f\n", v[count/2]);
        //cout << v[count/2] << endl;
    }
    // Mode
    mode = temp = v[0];
    count = 1;
    int counttemp = 1;
    for (vector<float>::iterator it =v.begin()+1;it!=v.end();++it){
        if(*it == temp){
            counttemp ++;
        }
        else{
            if(counttemp > count){
                count = counttemp;
                mode = temp;
            }
            counttemp = 1;
            temp = *it;
        }
    }
    cout << mode;
    return 0;
}
