#include <bits/stdc++.h>

int dau(int n){
    return (n % 2 == 0) ? -1 : 1;
}
int main(){
    int n, kq = 0; std::cin >> n;
    for(int i = 0; i <= 3*n + 1; i++) kq += dau(i)*i;
    std::cout << kq; return 0; 
}