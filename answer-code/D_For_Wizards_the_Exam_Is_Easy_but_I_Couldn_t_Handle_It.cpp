#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
using namespace std;

const long long MOD = 1e9 + 7;

struct qj {
    int l,r;
    int cnt = 0;
};

void solve(){
    int n;
    cin >> n;
    vector<int> a (n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }


    qj mx = {0,0,0};

    for(int i = 0;i < n;i++){
        int cnt = 0;
        for(int j = i + 1;j < n;j++){
            if(a[i] > a[j]){
                cnt++;
                if(cnt > mx.cnt){
                    mx.l = i;
                    mx.r = j;;
                    mx.cnt = cnt;
                }
            }else if(a[i] < a[j]){
                cnt--;
            }
        }
    }

    cout << mx.l + 1 << " " << mx.r + 1 << "\n"; 

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