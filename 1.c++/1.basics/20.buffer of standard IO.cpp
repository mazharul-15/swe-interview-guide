#include<iostream>
#include<ios> /// streamsize
#include<limits>
#include<stdio.h>

using namespace std;

int main() {

    char str[100], ch;

    scanf("%s", str);

    /// To clear Input Buffer
    //while(getchar() != '\n') {}  //// O(n)
    //fflush(stdin);  /// O(1)
    //cin.sync();   /// O(1)
    //cin>> ws;     /// O(1)
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');  /// O(1)

    scanf("%c", &ch);

    printf("%s %c", str, ch);
    return 0;
}
