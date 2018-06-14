/***
IP
 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
 
 OP
 Yes 1
 No 5
 Yes 6
 Yes 8
 ***/
 
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count,temp;
    ios::sync_with_stdio(false);
    cin >> count;
    vector <int> a;
    for(int i=0;i<count;i++){
        cin >> temp;;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    cin >> count;
    vector<int>::iterator low;
    for(int i=0;i<count;i++){
        cin >> temp;
        low = lower_bound(a.begin(),a.end(), temp);
        
        *low==temp?cout<< "Yes" : cout<<"No";
        cout <<" "<< low-a.begin()+1 <<endl;
    }        
    
    return 0;
}
