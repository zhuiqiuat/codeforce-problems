#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

const long long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    string ans (n,'0');
    vector<int> arr (n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    vector<int> pre (n);
    vector<int> suf (n);
    pre[0] = arr[0];
    suf[n - 1] = arr[n - 1];
    for(int i = 1;i < n;i++){
        pre[i] = min(pre[i - 1],arr[i]);
    }
    for(int i = n - 2;i >= 0;i--){
        suf[i] = max(suf[i + 1],arr[i]);
    }
    for(int i = 0;i < n;i++){
        if(arr[i] <= suf[i] && arr[i] == pre[i]) ans[i] = '1';
        if(arr[i] >= pre[i] && arr[i] == suf[i]) ans[i] = '1';
        if(arr[i] == suf[0] || arr[i] == pre[n - 1]) ans[i] = '1';
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