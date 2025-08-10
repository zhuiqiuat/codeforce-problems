#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

const long long MOD = 1e9 + 7;

struct qj {
    long long l,r,c;
};

bool cmp(qj q1,qj q2){
    if(q1.l != q2.l){
        return q1.l < q2.l;
    }else{
        return q1.c > q2.c;
    }
}

void solve(){
    long long n,k;
    cin >> n >> k;
    vector<qj> v (n);
    for(int i = 0;i < n;i++){
        cin >> v[i].l >> v[i].r >> v[i].c;
    }
    sort(all(v),cmp);
    long long cost = k;
    for(int i = 0;i < n;i++){
        if(cost >= v[i].l && cost <= v[i].r){
            cost = max(cost,v[i].c);
        }
    }
    cout << cost << "\n";
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