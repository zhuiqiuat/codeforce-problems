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

int cnt[200050];
int leaf = 0;

void dfs(vector<vector<int>>& tree,int now,int fa){
    int tot = 0;
    for(auto& to : tree[now]){
        if(to == fa){
            continue;
        }
        tot++;
        dfs(tree,to,now);
    }
    // cout << "now = " << now << " ";
    // cout << "fa = " << fa << "\n";
    if(tot == 0){
        cnt[fa]++;
        leaf++;
    }
}

void solve(){
    int n;
    cin >> n;
    leaf = 0;
    for(int i = 1;i <= n;i++){
        cnt[i] = 0;
    }
    vector<vector<int>> tree (n + 1);
    for(int i = 1;i < n;i++){
        int u,v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    if(n == 2){
        cout << "0\n";
        return;
    }else{
        if(tree[1].size() == 1){
            cnt[tree[1][0]]++;
            leaf++;
        }
        dfs(tree,1,-1);
        int mx = -1;
        for(int i = 1;i <= n;i++){
            mx = max(mx,cnt[i]);
            // cout << "i = " << i << " ";
            // cout << "cnt = " << cnt[i] << "\n";
        }
        // cout << "leaf = " << leaf << "\n";
        // cout << "mx = " << mx << "\n";
        cout << leaf - mx << "\n";
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