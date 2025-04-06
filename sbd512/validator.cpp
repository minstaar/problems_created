#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char* argv[])
{
    registerValidation(argc, argv);
    int N = inf.readInt(1, 100, "N");
    inf.readEoln();
 
    for (int i = 0; i < N; i++){
        int a = inf.readInt(0, 200, "A_i");
        inf.readSpace();
        int b = inf.readInt(0, 200, "B_i");
        inf.readSpace();
        int c = inf.readInt(0, 200, "C_i");
        inf.readEoln();
    }

    inf.readEof();
}