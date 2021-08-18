#include <bits/stdc++.h>

int main(){
    int n; std::cin >> n;
    float kq = 0;
    for(int i = 2; i <= n; i++) kq += (float)(1.0/i);
    printf("%.4f", kq); return 0;
}