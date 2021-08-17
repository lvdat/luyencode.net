#include <bits/stdc++.h>

int main(){
    long res = 1;
    int n, k; std::cin >> n >> k;
    for (int i = 1; i <= k ; i ++ , n--) res = res *n/i;
    std::cout << res;
}