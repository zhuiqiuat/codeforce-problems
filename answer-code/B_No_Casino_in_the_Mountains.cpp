#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

const long long MOD = 1e9 + 7;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a (n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int now = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(a[i] == 0){
            now++;
        }
        if(a[i] == 1){
            now = 0;
        }
        if(now == k){
            i++;
            ans++;
            now = 0;
        }
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