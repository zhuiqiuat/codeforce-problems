#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

const long long MOD = 1e9 + 7;

void solve(){
    int n,j,k;
    cin >> n >> j >> k;
    vector<int> arr (n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int x = arr[j - 1];
    sort(all(arr));
    arr.erase(unique(all(arr)),arr.end());
    if(k == 1 && arr[arr.size() - 1] != x){
        cout << "No\n";
    }else{
        cout << "Yes\n";
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