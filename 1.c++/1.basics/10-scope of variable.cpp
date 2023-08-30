#include<iostream>
#include<limits.h>
#include<conio.h>
#include<algorithm>
#include<utility> // pair

/// sequence STL start
#include<vector>
#include<list>  /// doubly linked list
#include<forward_list>  /// single linked list
#include<deque>  /// doubly ended queue
/// sequence STL end

/// container adapter STL start
#include<stack>
#include<queue>
/// container adapter STL end

/// associate container STL start
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
/// associate container STL end

using namespace std;

int x = 10;

int main() {

    int x = 50;
    cout<< "local variable: " << x << endl;
    cout<< "global variable: " << ::x << endl;
    return 0;
}
