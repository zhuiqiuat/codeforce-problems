#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

const long long MOD = 1e9 + 7;

void solve(){
    int n,m;
    cin >> n >> m;
    long long ans = 0;
    vector<pair<long long,long long>> a (n);
    map<long long,long long> mp;
    for(int i = 0;i < n;i++){
        cin >> a[i].first;
    }
    for(int i = 0;i < n;i++){
        cin >> a[i].second;
    }
    for(int i = 0;i < n;i++){
        for(long long x = a[i].first - a[i].second;x <= a[i].first + a[i].second;x++){
            long long y = sqrt(a[i].second * a[i].second - (x - a[i].first) * (x - a[i].first));
            // cout << "x = " << x << " ";
            // cout << "y = " << y << "\n";
            if(mp.find(x) == mp.end()){
                ans += y * 2 + 1;
                mp[x] = y;
            }else{
                if(mp[x] < y){
                    ans += (y - mp[x]) * 2;
                    mp[x] = y;
                }
            }
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