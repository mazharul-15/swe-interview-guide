#include<iostream>
using namespace std;

int main() {

    cout<< "hello\n";
    clog<< "An error\n";
    cerr<< "Hi i am the cerr\n";

    int n;
    //char ch[100];
    string ch;
    cin>> n;
    //cin>> ch;
    getline(cin, ch);

    cout<< n << " " << ch << " " << "YES\n";
    return 0;
}
