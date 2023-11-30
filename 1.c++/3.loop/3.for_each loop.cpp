#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{5, 3, 6, 2, 8};

    for_each(v.begin(), v.end(), [](int &i) {
        i += 2;
    });
    for_each(v.begin(), v.end(), [](int i){
        cout<< i << " ";
    });
    return 0;
}
