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
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    if(a[n - 1] != b[n - 1]){
        cout << "NO\n";
    }else{
        bool ok = true;
        for(int i = n - 2;i >= 0;i--){
            if(a[i] != b[i]){
                int t = b[i] ^ a[i];
                if(t != a[i + 1] && t != b[i + 1]){
                    ok = false;
                    break;
                }
            }
        }   
        cout << (ok ? "YES\n" : "NO\n");
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