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

int f(char c1,char c2,int d){
    if(d == 0){
        return c2 - c1;
    }else{
        return '9' - c1 + c2 - '0' + 1;
    }
}

void solve(){
    string l,r;
    cin >> l >> r;
    int d = r[0] - l[0];
    int ans = 0;
    if(d >= 2){
        ans = 0;
    }else{
        if(d == 1){
            ans = 1;
        }else{
            ans = 2;
        }
        for(int i = 1;i < sz(l) && d < 2;i++){
            if(d == 0){
                if(l[i] != r[i]){
                    d = f(l[i],r[i],d);
                    if(d == 1){
                        ans++;
                    }
                }else{
                    ans += 2;
                }
            }else{
                d = f(l[i],r[i],d);
                if(d == 1){
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
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