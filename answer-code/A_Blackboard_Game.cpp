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
    if(n & 1){
        cout << "Alice\n";
    }else{
        if((n - 1) % 4 == 3){
            cout << "Bob\n";
        }else{
            cout << "Alice\n";
        }
    }
}
// 0 1 2 3 4 5 6 7

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