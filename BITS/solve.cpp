// C++ with O2
#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 12;
const long long Mod = 1e9 + 7;
const long long oo = 1e18;

//mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

#define fi first
#define se second
#define pb push_back

#define Bit(a, i) (((long long)a>>((int)i - 1))&1)
#define dBit(x) __builtin_popcount((int)x)
#define FOR(i, a, b) for (int _ = a, __ = b, i = _; i <= __; i++)
#define FORD(i, a, b) for (int _ = a, __ = b, i = _; i >= __; i--)
#define FIX(n, x) cout << setprecision((int)n) << fixed << x << "\n";

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int n, ntest;
long long d[40], p[40];

main(){
    #define file "BITS"
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);

    p[0] = 1;
    FOR (i, 1, 32) p[i] = p[i - 1] * 2;

    cin >> ntest;
    while (ntest--) {
        cin >> n;
        FOR (i, 0, 32) d[i] = 0;
        FOR (i, 1, n) {
            long long x;
            cin >> x;
            FOR (j, 1, 32) if (Bit(x, j)) d[j - 1]++;
        }
        long long ans = 0;
        FOR (i, 0, 31) ans += (d[i] * (n - d[i])) * p[i];
        cout << ans << "\n";
    }
    
}