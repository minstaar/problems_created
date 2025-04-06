#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    int N = opt<int>(1);
    int a = opt<int>(2);
    int b = opt<int>(3);
    int c = opt<int>(4);

    printf("%d\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("%d %d %d\n", rnd.next(0, a), rnd.next(0, b), rnd.next(0, c));
    }

    return 0;
}