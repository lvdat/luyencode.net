#include <bits/stdc++.h>

int main(){
    int vitri = 0, n, temp, max = -1e9; std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> temp;
        if(temp >= max){
            max = temp; vitri = i;
        }
    }
    std::cout << vitri; return 0;
}