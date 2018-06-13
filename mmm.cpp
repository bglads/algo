//Mean, Median, Mode
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float count,total=0,temp;
    vector<float> v;
    cin >> count;
    for (int i=0;i<count;i++){
        cin >> temp;
        v.push_back(temp);
        total += v[i];
    }
    sort(v.begin(),v.end());
    //Mean
    printf("%.1f\n",total/count);
    //Median
    if(int(count)%2==0){
        printf("%.1f\n", float((v[count/2]+v[count/2-1])/2));
    }
    else{
        printf("%.1f\n", v[count/2]);
    }
    //Mode
    float mode = temp = v[0];
    count = 1;
    int countm = 1;
    for(int i=1;i<v.size();++i){
        if (v[i]==temp){
            count++;
        }
        else{
            if( count > countm){
                countm=count;
                mode = temp;
            }
            count = 1;
            temp = v[i];
        }
    }
    cout << mode;
    return 0;
}
