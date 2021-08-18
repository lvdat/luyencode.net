#include <bits/stdc++.h>

int main(){
    int n, i = 1;
    float x, t, kq = 0; 
    std::cin >> x >> n; t = x;
    while (i <= n) {
        kq += t; i++;
        t = t * x / i;
    }
    printf("%.2f", kq); return 0;
}