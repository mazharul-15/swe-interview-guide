#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 100;

    auto func = [](int a, int b) -> int
    {
        return a*b;
    };

    cout<< func(3, 4) <<"\n";

    auto labda = [&]() -> int
    {
      return a*b;
    };
    cout<< labda() << "\n";
    return 0;
}
