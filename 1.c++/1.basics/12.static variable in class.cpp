#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<math.h>
#include<utility>
#include<limits.h>
#include<algorithm>

using namespace std;

class zam {

    int jam;

    public:
        static int i;
        ///constructor
        zam(int x) {
            cout<< "hey I am the Constructor\n";
            jam = x;
            cout<< "hey I am the private variable: " << jam << endl;
        }

        ~zam(){
            cout<< "hey I am the Destructor!!!\n";
        }

};

int zam::i = 10;

int main() {

    zam obj = zam(100);

    /// static char type;
    static char st = 'A'
    printf("\nStatic Char Type:  %c\n", st);

    return 0;
}
