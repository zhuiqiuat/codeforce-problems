#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

const long long MOD = 1e9 + 7;

void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == '1') cnt++;
    }

    if(cnt <= k || n < 2 * k){
        cout << "Alice\n";
    }else{
        cout << "Bob\n";
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