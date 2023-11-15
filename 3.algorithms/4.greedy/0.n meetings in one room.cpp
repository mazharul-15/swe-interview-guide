#include<bits/stdc++.h>
using namespace std;

struct meeting {
    int id;
    int st;
    int ed;
};

bool comparator(meeting a, meeting b) {
    if(a.ed < b.ed) return true;
    else if(a.ed > b.ed) return false;
    else if(a.ed == b.ed) {
        if(a.st < b.st) return false;
        else return true;
    }
}

/*void maxMeeting(meeting &time[], int n) {

       sort(time, time+n, comparator);

        for(int i = 0; i < n; i++) {
            cout<< time[i].id << " " << time[i].st << " " << time[i].ed << endl;
        }
}*/


int main() {

    int n, st, ed, id;
    meeting time[10000];

    cin>> n;
    for(int i = 0, id = 1; i < n; i++) {
        cin>> st >> ed;

        time[i].id = id++;
        time[i].st = st;
        time[i].ed = ed;
    }

    sort(time, time+n, comparator);
    for(int i = 0; i < n; i++) {
            cout<< time[i].id << " " << time[i].st << " " << time[i].ed << endl;
        }

    //maxMeeting(time[0], n);

    return 0;
}
