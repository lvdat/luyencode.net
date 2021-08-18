#include <bits/stdc++.h>

int main(){
    int n, x, t; std::cin >> n >> x;
    bool ok = false;
    for(int i = 0; i < n; i++){
        std::cin >> t;
        if(t == x) ok = true;
    }
    std::cout << (ok ? "YES" : "NO"); return 0;
}