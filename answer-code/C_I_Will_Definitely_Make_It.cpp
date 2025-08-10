#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

const long long MOD = 1e9 + 7;

struct cmp {
    bool operator() (long long l1,long long l2){
        return l1 > l2;
    }

};

void solve(){
    int n,k;
    cin >> n >> k;
    vector<long long> a (n);
    long long mx = -1;
    long long mn = LLONG_MAX;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    long long now = a[k - 1];
    long long w = 1;
    priority_queue<long long,vector<long long>,cmp> pq;
    for(int i = 0;i < n;i++){
        if(a[i] > now){
            pq.push(a[i]);
        }
    }
    bool ok = true;
    while(pq.size()){
        long long now2 = pq.top();
        pq.pop();
        if(now == now2) continue;
        long long d = now2 - now;
        w += d;
        // cout << "now12 = " << now2 << "\n";
        // cout << "w = " << w << "\n";
        if(now >= w - 1){
            now = now2;
        }else{
            ok = false;
            // cout << "now22 = " << now2 << "\n";
            break;
        }
    }
    cout << (ok ? "YES\n" : "NO\n");
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