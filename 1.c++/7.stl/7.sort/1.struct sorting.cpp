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
    if(a.first >= b.first) {
        if(a.second >= b.second) return true;
        else return false;
    }
    else return false;
}

int main() {

    Interval arr[] = {
        {4, 2}, {1, 5}, {1, 3}, {1, 2} , {1, 2}, {8, 9}
    };

    sort(arr, arr + 6, comparator);

    for(int i = 0; i < 6; i++) {

        cout<< arr[i].first << " " << arr[i].second << "\n";
    }

    return 0;
}
