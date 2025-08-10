#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

const long long MOD = 1e9 + 7;

void solve(){
    string s;
    cin >> s;
    char c = '9' + 1;
    for(int i = 0;i < s.size();i++){
        c =  min(c,s[i]);
    }
    cout << c << "\n";
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