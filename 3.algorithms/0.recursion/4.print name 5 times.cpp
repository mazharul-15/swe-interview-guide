#include<iostream>
using namespace std;

void printName(int n){
    if(n == 0){
        return ;
    }

    printf("Mazharul\n");
    printName(n-1);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    printName(n);

    return 0;
}
