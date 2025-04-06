#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int N; cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++){
        int a, b, c; cin >> a >> b >> c;
        arr[i] = a + b + c;
    }
    
    sort(arr.begin(), arr.end());
    auto it = lower_bound(arr.begin(), arr.end(), 512);
    cout << (it != arr.end() ? *it : -1) << '\n';

    return 0;
}