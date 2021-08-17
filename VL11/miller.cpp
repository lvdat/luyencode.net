#include <iostream>
#include <tuple>
using namespace std;
typedef unsigned long long ll;
pair<ll, ll> factor(ll n) {
    ll s = 0;
    while ((n & 1) == 0) {
        s++;
        n >>= 1;
    }
    return {s, n};
}
ll pow(ll a, ll d, ll n) {
    ll result = 1;
    a = a % n;
    while (d > 0) {
        if (d & 1) result = result * a % n;
        d >>= 1;
        a = a * a % n;
    }
    return result;
}
bool test_a(ll s, ll d, ll n, ll a) {
    if (n == a) return true;
    ll p = pow(a, d, n);
    if (p == 1) return true;
    for (; s > 0; s--) {
        if (p == n-1) return true;
        p = p * p % n;
    }
    return false;
}
bool miller(ll n) {
    if (n < 2) return false;
    if ((n & 1) == 0) return n == 2;
    ll s, d;
    tie(s, d) = factor(n-1);
    return test_a(s, d, n, 2) && test_a(s, d, n, 13) && test_a(s, d, n, 23) && test_a(s, d, n, 1662803);
}
int main(){
    ll n;
    cin >> n;
    if(miller(n))
        cout << "YES";
    else
        cout << "NO";
}