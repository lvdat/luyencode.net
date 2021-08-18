#include <bits/stdc++.h>

int main(){
    int n; std::cin >> n;
    std::cout << ((n + 2)*(n - 1)/2 + 2*n); // O(1), nếu dùng lặp thì về O(n)
    return 0;
}