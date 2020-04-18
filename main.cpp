#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    long long N, K;

    cin >> N >> K;

    long long res = N % K;

    cout << min(res, K - res) << endl;
    return 0;
}