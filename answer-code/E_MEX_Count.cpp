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
    map<int,int> cnt;
    int mx = -1;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        mx = max(mx,x);
        cnt[x]++;
    }
    int mex = mx + 1;
    for(int i = 0;i <= mx;i++){
        if(cnt[i] == 0){
            mex = i;
            break;
        }
    }
    vector<int> ans (n + 2,0);
    if(mex != 0){
        ans[cnt[0]]++;
        ans[n + 1]--;
        for(int i = 1;i <= mex;i++){
            int l = cnt[i];
            int r = n - i;
            ans[l]++;
            ans[r + 1]--;
        }
    }else{
        ans[0] = 1;
    }

    for(int i = 1;i <= n;i++){
        ans[i] += ans[i - 1];
    }

    for(int i = 0;i <= n;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

}

int main(){

    // freopen("1.in", "r", stdin);
    // freopen("1.out", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }

    // fclose(stdin);
    // fclose(stdout);

    return 0;
}