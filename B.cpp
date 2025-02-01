#include <bits/stdc++.h>
using namespace std;
#define isz(x) int(x.size())
typedef long long ll;

void solve() {
    // ll n,m,s;
    // cin >> n >> m >> s;

    // if (m==3) cout << 8 << '\n';
    // else if (m==2) cout << 12 * (n-2) << '\n';
    // else if (m==1) cout << 6 * ((n-2)*(n-2)) << '\n';
    // else cout << (n-2)*(n-2)*(n-2) << '\n';
    //a
    // if (n+m >= 6) cout << (n%2==0 ? 2 : 1) * (m%2==0 ? 2 : 1) << '\n';
    // else cout << 0 << '\n';
    // cout << (min(n,m)&1 ? 1 : 2) * (min(n,m)&1 ? max(n,m) - min(n,m) + 1 : max(n,m) - min(n,m)+2) << '\n';
    //c
    // int cnt = 0;
    // while (n-2 > 0 && m-2 > 0) {
    //     ll l = n*m - ((n-2)*(m-2));
    //     if (s >= l) s-=l;
    //     else break;

    //     ++cnt;
    //     --n;
    //     --m;
    // }
    // cout << cnt << '\n';
    /*int ans,c=0;
    int r = min(n,m) * max(n,m), l = min(n,m)*(max(n,m)-1);
    while (l<r) {
        int mid = (int)round(double(l+(r-l) / 2.0));
        if (mid > s) r = mid;
        if (mid < s) l = mid;
        else {ans = mid;break;}
        ++c;
    }
    cout << c << '\n';*/




    // int n, q;
    // cin>>n>>q;
    // vector<array<int, 2>> pawns(n, {0,0});
    // for (auto &[xp, yp] : pawns) cin >> xp >> yp;
    // for (int i = 0; i<q; ++i) {
    //     int x,y;
    //     cin >> x >> y;

    //     array<int, 2> pawn = {(int)1e9, (int)1e9}; // the closest pawn
    //     for (auto &[xp, yp] : pawns) {
    //         if (abs(pawn[0]-x) >= abs(x-xp) && abs(pawn[1]-x) >= abs(y-yp)) pawn = {xp, yp};
    //     }
    //     int xp = pawn[0];
    //     int yp = pawn[1];

    //     int c=0;

    //     while (abs(x-xp) > 0 || abs(y-yp) > 0) {
    //         if (abs(x-xp) > 0) {
    //             if (x-xp > 0) --x;
    //             else ++x; // if (x-xp < 0)
    //         }
    //         if (abs(y-yp) > 0) {
    //             if (y-yp > 0) --y;
    //             else ++y; // if (y-yp < 0)
    //         }
    //         // cout << x << ' ' << y << '\n'; //DEBUG
    //         ++c;
    //     }

    //     cout << c << '\n';
    // }        


    // int a,b,c,d,k;
    // cin >> a >> b >> c >> d >> k;
    // int dx =b-d ,dy = a-c;
    // int ans = (k/dy) * (a+c) + (k/dx) * (b+d);
    // cout << abs(ans) << '\n';
    // i64 n,a,b,c;
    // cin >> n >> a >> b >> c;
    // i64 x,y,z;
    // int n,m,k;
    // vector<vector<char>> g(n, <vector<char>(m));
    // for (auto &i : g) {
    //     for (auto &j : i) cin >> i;
    // }
    // for (int i = 0; i < k; ++i) {
    //     priority_queue<int> pq;
    // }


//A
    // int l,r;
    // cin >> l >> r;
    // if (l+r == 2) cout << 1 << '\n';
    // else cout << r -l << '\n';
//B
    typedef int64_t i64;
    // int n,l,r;
    // cin >> n >> l >> r;
    // --r; --l;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;
    // sort(a.begin() + l, a.begin() + r+1);
    // sort(a.begin(), a.begin()+l);
    // sort(a.begin()+r+1, a.end());
    // i64 sum = accumulate(a.begin()+l, a.begin()+r+1, NULL);
    // i64 ans=sum;
    // i64 delta = 0;
    // for (auto i = 0 ;i < min(r-l+1, n-r-1); ++i) {
    //     delta += a[r+i+1] - a[r-i];
    //     ans = min(ans, sum+delta);
    // } 
    // delta = 0;
    // for (auto i = 0 ;i < min(r-l+1, l); ++i) {
    //     delta += a[i] - a[r-i];
    //     ans = min(ans, sum+delta);
    // }
    // cout << ans << '\n';


    int n;
    cin >> n;
    vector<i64> a(n),b;
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    for (int i = 0; i < n-1; ++i) if (a[i]==a[i+1]) b.push_back(a[i]);

    while(b.size()>=5) b.pop_back();
    for (auto x : b) {
        auto c = a;
        for (int j = 0; j < 2; ++j) c.erase(find(c.begin(), c.end(), x));
        for (int i = 0; i < (int)c.size()-1; ++i) {
            if (abs(c[i+1] - c[i]) < 2*x) {
                cout << x << ' ' << x << ' ' << c[i] << ' ' << c[i+1] << '\n';
                return;
            }
        }
    }
    cout << "-1\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;cin>>T;while (T--)
    solve();
    return 0;
}