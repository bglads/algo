/#include <cmath>                                                                                                                                                        
#include <cstdio>                                                                                                                                                         
#include <vector>                                                                                                                                                         
#include <iostream>                                                                                                                                                       
//#include <algorithm>                                                                                                                                                    
using namespace std;                                                                                                                                                      
                                                                                                                                                                          
//Read variable sized arrays                                                                                                                                              
int main() {                                                                                                                                                              
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */                                                                                             
    int q,a,len,temp;                                                                                                                                                     
    vector<int> v;                                                                                                                                                        
    vector <vector<int>> vec;                                                                                                                                             
    cin >> q >> a;                                                                                                                                                        
    for(int i=0;i<q;i++){                                                                                                                                                 
        cin >> len;                                                                                                                                                       
        for(int j=0;j<len;j++){                                                                                                                                           
            cin >> temp;                                                                                                                                                  
            v.push_back(temp);                                                                                                                                            
        }                                                                                                                                                                 
        vec.push_back(v);                                                                                                                                                 
        v.clear();                                                                                                                                                        
    }                                                                                                                                                                     
    int l,m;                                                                                                                                                              
    for(int i=0;i<a;i++){                                                                                                                                                 
        cin >> l >> m;                                                                                                                                                    
        cout <<vec[l][m] <<endl;                                                                                                                                          
    }                                                                                                                                                                     
    return 0;                                                                                                                                                             
}       
