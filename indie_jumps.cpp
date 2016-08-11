// Name:
// Summary:


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

// Remove additional cin/cout before submission.

bool cmps( const vector<int>& p,
               const vector<int>& r ) {
 return p[0] < r[0];
}

int GetFinalTile(int numberOfTiles, int numberOfTrapdoors, int trapdoors[][2], int numberOfJumps, int jumps[])
{
    // Write your code here.
    map<int,int>straps,dtraps;
    int now=0;
  // Create and initializes 2d vector
  vector< vector<int> > vec;
  for( int i=0; i<numberOfTrapdoors; i++ ) {
    vector<int> tmpVec;
    for( int j=0; j<2; j++ ) {
        
      tmpVec.push_back( trapdoors[i][j] );
    }
    vec.push_back( tmpVec );
  }

sort(vec.begin(), vec.end(), cmps);

    for(int i=0;i<numberOfTrapdoors;i++){
        //if source is in previous known destinations update traps
        int src=vec.at(i).at(0);

        int dest=vec.at(i).at(1);
        if(dtraps.find(src)!=dtraps.end()){
            straps[dtraps[src]]=dest;
            straps[src]=dest;
            dtraps[dest]=src;
            continue;
        }
        straps[src]=dest;
        dtraps[dest]=src;
    }
    for(int i=0;i<numberOfJumps;i++){
        if(now+jumps[i]>numberOfTiles)
            continue;

        if(straps.find(now+jumps[i])!=straps.end()){
            now=straps[now+jumps[i]];
            }
        else{ 
        now=now+jumps[i];
        }
    }
    return straps.find(now)!=straps.end()?straps[now]:now;
}

// Do not modify the main() function. The checker depends on the input and output format.
int main()
{
    int numberOfTiles, numberOfTrapdoors, numberOfJumps;
    cin>>numberOfTiles;
    cin>>numberOfTrapdoors;
    int trapdoors[numberOfTrapdoors][2];
    for(int i = 0; i < numberOfTrapdoors; ++i)
    {
        // Index 0 is the source, index 1 is the destination for ith trapdoor
        cin>>trapdoors[i][0]>>trapdoors[i][1];
    }
    cin>>numberOfJumps;
    int jumps[numberOfJumps];
    for(int i = 0; i < numberOfJumps; ++i)
    {
        cin>>jumps[i];
    }
    cout<<GetFinalTile(numberOfTiles, numberOfTrapdoors, trapdoors, numberOfJumps, jumps);
    return 0;
}


