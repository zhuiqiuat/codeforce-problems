#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fr first
#define sc second
#define sz(x) (x).size()
#define all(a) (a).begin(),(a).end()
#define srt(a) sort(all(a));
#define MX(a) *max_element(all(a));
#define MN(a) *min_element(all(a));

const long long MOD = 1e9 + 7;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<ll> s (n + 1);
    vector<ll> l (n + 1);
    for(int i = 1;i <= n;i++){
        cin >> s[i];
    }
    for(int i = 1;i <= n;i++){
        cin >> l[i];
    }
    vector<vector<ll>> dp (m + 1,vector<ll> (n + 1,0));
    dp[0][1] = 1;
    for(int i = 1;i <= m;i++){
        ll scnt = 0;
        ll lcnt = 0;
        for(int j = 1;j <= n;j++){
            scnt += dp[i - 1][j] * s[j];
            lcnt += dp[i - 1][j] * l[j];
            scnt %= MOD;
            lcnt %= MOD;
        }
        for(int j = 1;j <= n;j++){
            dp[i][j] += lcnt * s[j] + scnt * s[j];
            dp[i][j] %= MOD;
            dp[i][j] += scnt * l[j];
            dp[i][j] %= MOD;
        }
    }
    ll ans = 0;
    for(int i = 1;i <= n;i++){
        ans += dp[m][i];
        ans %= MOD;
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}