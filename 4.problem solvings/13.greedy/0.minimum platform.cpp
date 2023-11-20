#include<bits/stdc++.h>
using namespace std;

struct Interval {
    int first, second;
};

/* compare with only first value
bool comparator(Interval a, Interval b) {
    if(a.first <= b.first) return true;
    else return false;
} */

// comparison with first and second value

bool comparator(Interval a, Interval b) {
    if(a.second <= b.first) return true;
    else return false;
}

int main() {

    int n, f, s;
    Interval time[1000];

    cin>> n;
    for(int i = 0; i < n; i++) {
        cin>> f >> s;
        time[i].first = f;
        time[i].second = s;
    }

    sort(time, time + 6, comparator);

    for(int i = 0; i < 6; i++) {

        cout<< time[i].first << " " << time[i].second << "\n";
    }

    return 0;
}

/*
6
900 910
940 1200
950 1120
1100 1130
1500 1900
1800 2000
*/

