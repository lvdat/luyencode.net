#include <bits/stdc++.h>

int main(){
    int n, temp, max = -1e9; std::cin >> n; 
    for(int i = 0; i < n; i++){
        std::cin >> temp;
        if(temp > max) max = temp;
    }
    std::cout << max; return 0;
}