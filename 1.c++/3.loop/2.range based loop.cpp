#include<bits/stdc++.h>
using namespace std;


int main() {

    set<int> oSet;
    for(int i = 1; i < 11; i++) oSet.insert(i+10);
    for(auto &i : oSet) {
        cout<< i << endl;
    }

    map<int, int> oMap;
    for(int i = 1; i < 11; i++) oMap[(i+10)] = 34+i;
    for(auto &i : oMap) {

        cout<< i.first << " -> " << i.second << "\n";
    }

    /// another method for map
    map<int, int> myMap;
    for(int i = 1; i < 11; i++) myMap[(i+10)%9] = 34+i;
    for(auto &[key, value] : myMap) {
        cout<< key << " -> " << value << "\n";
    }

    return 0;
}
