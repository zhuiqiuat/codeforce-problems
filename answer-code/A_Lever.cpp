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
    vector<int> a (n);
    vector<int> b (n);
    for(auto& x : a){
        cin >> x;
    }
    for(auto& x : b){
        cin >> x;
    }
    int cnt = 0;
    int ans = 0;
    bool ok1 = false;
    bool ok2;
    while(!ok1){
        ok1 = true;
        ok2 = true;
        for(int i = 0;i < n;i++){
            if(ok1 && a[i] > b[i]){
                a[i]--;
                ok1 = false;
            }
            if(ok2 && a[i] < b[i]){
                a[i]++;
                ok2 = false;
            }
        }
        ans++;
    }
    cout << ans << "\n";
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