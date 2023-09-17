#include <iostream>
using namespace std;

int main()
{
    /*int a;
    char ch[100], x;
    cin>> a;
    cin.sync();

    cin.getline(ch, 100);
    cout<< a << " " << ch << endl;

    cin.get(x);
    cout<< x << endl;*/

    char ch2[100];

    cin.read(ch2, 10);
    cout<< ch2 << endl;
    return 0;
}

