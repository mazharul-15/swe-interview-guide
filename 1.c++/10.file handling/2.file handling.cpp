#include<bits/stdc++.h>
using namespace std;

int main()
{
    FILE *f1, *f2;

    f1 = freopen("input.txt", "r", stdin);
    f2 = freopen("outputSUM.txt", "w", stdout);

    int a, b;

    while(!feof(f1))
    {
        cin>> a >> b;

        int sum = a + b;
        cout<< sum << endl;
    }

    fclose(f1);
    fclose(f2);

    return 0;
}
