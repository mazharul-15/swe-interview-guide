#include<bits/stdc++.h>
using namespace std;

int depth(string &str, int &id) {

    if(id >= str.size()|| str[id] == 'l') return 0;
    //if(`  ) return 1;

    id++;
    int left =  depth(str, id);

    id++;
    int right = depth(str, id);

    return max(left, right) + 1;
}

int main() {

    /// fast IO
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int t;
    string str;

    cin>> t;

    while(t--) {
        cin>> str;
        int id = 0;
        cout<< depth(str, id) << "\n";
    }


    return 0;
}
