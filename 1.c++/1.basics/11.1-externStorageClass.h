using namespace std;

/// global declaration
extern int global_var = 50000;

void extern_storage_class_2(void) {

    cout<< "This file is an external File Output:" << global_var << endl;
}

void extern_storage_class(void) {
    global_var = 1234;
}
