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
    ll k;
    cin >> n >> k;
    vector<ll> s (n);
    vector<ll> t (n);
    map<ll,int> cnt;
    for(int i = 0;i < n;i++){
        ll x;
        cin >> x;
        ll y = x - x / k * k;
        ll a = y;
        ll b = llabs(y - k);
        cnt[min(a,b)]++;
    }
    for(int i = 0;i < n;i++){
        ll x;
        cin >> x;
        ll y = x - x / k * k;
        ll a = y;
        ll b = llabs(y - k);
        cnt[min(a,b)]--;
        if(cnt[min(a,b)] == 0){
            cnt.erase(min(a,b));
        }
    }

    if(cnt.empty()){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

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