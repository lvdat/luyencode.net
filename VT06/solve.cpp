#include <bits/stdc++.h>

int main(){
    int n, t, dem = 0; std::cin >> n;
    float tong = 0;
    for(int i = 0; i < n; i++){
        std::cin >> t; 
        if(t % 2 != 0){
            tong += t; dem++;
        }
    }
    if(dem == 0){
        std::cout << "0"; return 0;
    }
    printf("%.4f", tong/(float)dem); return 0;
}