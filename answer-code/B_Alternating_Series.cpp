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
    int n;
    cin >> n;
    vector<ll> ans (n,-1);
    for(int i = 1;i < n;i += 2){
        ans[i] = 3;
    }
    if((n & 1) == 0){
        ans[n - 1] = 2;
    }
    for(int i = 0;i < n;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}