/* Standard  */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
/* TYPES  */
#define vvi vector<vector<int>>
#define vc vector<char>
#define vi vector<int>
#define um unordered_map
#define us unordered_set
#define pii pair<int,int>
/* UTILS */
int mod= 1000000007;
#define pi 3.1415926535897932384626433832795
#define all(a) (a).begin(), (a).end()
#define cntsbit __builtin_popcount
#define cntsbitl __builtin_popcountll
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define alice cout<<"Alice\n";
#define bob cout<<"Bob\n";
/* Functions */
int gcd(int a, int b) {if (b == 0) return a;return gcd(b, a % b);}
int lcm(int a, int b) {int res = a / gcd(a, b) * b;return (res > 1e9) ? 0 : res;}
vi input(int n) {vi arr(n); for (int i = 0; i < n; i++) cin >> arr[i]; return arr;}
int maxel(vi& a) { return *max_element(a.begin(), a.end()); }
int minel(vi& a) { return *min_element(a.begin(), a.end()); }
ll sumv(vi& a, int b, int c) {return accumulate(a.begin() + b, a.begin() + c, 0LL);}
vi getfactors(int n) {vi factors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {factors.push_back(i);if (i != n / i) factors.push_back(n / i);}}
    sort(factors.begin(), factors.end());return factors;}
vi sieve(int n) {vector<bool> isprime(n + 1, true); vi primes;
    if (n < 2) return primes;isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isprime[i]) {for (int j = i * i; j <= n; j += i){isprime[j] = false;} }}
    for (int i = 2; i <= n; i++){if (isprime[i]) primes.push_back(i);}
    return primes;}
vector<ll> pref(vi &a) { vector<ll> pre(a.size() + 1, 0);
    for (int i = 0; i < (int)a.size(); i++){pre[i + 1] = pre[i] + a[i];}
    return pre;}
ll bpow(ll n, ll k){ll res = 1;n %= mod;
    while(k){if(k & 1) res = (res * n) % mod;n = (n * n) % mod;k >>= 1;}
    return res;}
/* Setup*/
void setup() {
}
/* Main function */
void solve() { 
}
int main() {
    setup();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
