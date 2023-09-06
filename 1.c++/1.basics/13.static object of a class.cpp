/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU

    Program: Behavior of static and non-static objects of a class
             using destructor.

*/

#include<iostream>

using namespace std;

class zam {

        int value = 10;

        public:
            zam() {
                cout<< "Inside Constructor\n\n";
            }

            ~zam() {
                cout<< "Inside Destructor\n\n";
            }
};


int main() {

    /// if we create a non-static object
    /// then the life time of the object will
    /// be destroy before the end of the main function

    /// if we create a static object inside a block
    /// then the life time of the static object will
    /// remain end of the main function
    {
        /// inside a block
        static zam obj;
    }

    {
        //static zam obj1;
    }

    cout<< "End of main function\n\n";
    return 0;
}
