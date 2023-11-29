#include<bits/stdc++.h>
using namespace std;

void mapPrint(map<int, int> &mp) {

    map<int, int>:: iterator it;
    for(it = mp.begin(); it != mp.end(); it++) {
        cout<< it->first << " " << it->second << endl;
    }
}


int main() {

    /// fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //char key;
    int t, n, key, value;
    map<int, int>mp;

    cin>> t;

    while(t--) {

        cin>> n;

        while(n--) {
            cin>> key >> value;
            mp[key] = value;
        }

        mapPrint(mp);

        mp.clear();
    }


    return 0;
}
