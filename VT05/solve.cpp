#include <bits/stdc++.h>

int main(){
    int n, x, t, dem = 0; std::cin >> n >> x;
    for(int i = 0; i < n; i++){
        std::cin >> t;
        if(t == x) dem++;
    }
    std::cout << dem; return 0;
}