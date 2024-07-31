#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long f(int n) {
    return (n<=1?1:n*f(n-1));
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	// int t;
    // cin >> t;
    // while (t--) {
    //     int a,b;
    //     cin >> a >> b;
    //     cout << ((a+b)%3==0&&2*a>=b&&2*b>=a?"YES":"NO") << '\n';
    // }

    /* .............................................. */

    // string s;
    // cin >> s;
    // int c[26] = {}, c1=0;
    // for (char d : s) ++c[d-'A'];
    // for (int i=0; i<26; ++i) {
    // 	c1+=c[i]&1;
    // }
    // if (c1>1) {
    // 	cout << "NO SOLUTION";
    // 	return 0;
    // }
    // string t;
    // for (int i = 0; i<26; ++i)
    // 	if (c[i]&1^1) 
    // 		for (int j = 0; j < c[i]/2; ++j) t+=(char)('A'+i);
    // cout << t;
	// for (int i = 0; i < 26; ++i) 
	// 	if (c[i]&1) for (int j =0; j<c[i];++j) cout << (char)('A'+i);
	// reverse(t.begin(), t.end());
	// cout << t;

    /* .............................................. */

    // string s;
    // cin >> s;
    // sort(s.begin(),s.end());
    // vector<string> ans;
    // do {
    //     ans.push_back(s);
    // } while (next_permutation(s.begin(),s.end()));
    // cout << ans.size() << '\n';
    // for (auto i : ans) cout << i << '\n'; 

    // int n, p[20];
    // ll s=0,ans=0;
    // cin >> n;
    // for (int i = 0; i<n;++i)
    //     cin >> p[i], s+=p[i];
    // for (int i =0;i<1<<n;++i) {
    //     ll cs = 0;
    //     for (int j=0;j<n;++j)
    //         if (i>>j&1) cs+=p[i];
    //     if (cs<=s/2) ans = max(ans, cs);
    // }
    // cout << s-2*ans;

    // auto x = 0b000101,y=0b000011;
    // cout << bitset<6>(x) << endl;
    // cout << bitset<6>(y) << endl;

    // string s[8];
    // bool b[15];

    // for (int i=0;i<8;++i) cin >> s[i];
    // int p[8], ans=0;
    // iota(p,p+8,0);
    // do {
    //     bool ok =1;
    //     for (int i =0;i<8;++i)
    //         ok&=s[i][p[i]] == '.';
    //     memset(b,0,15);
    //     for (int i = 0; i<8; ++i) {
    //         if(b[i+p[i]]) ok=0;
    //         b[i+p[i]] =1;
    //     }
    //     memset(b,0,15);
    //     for (int i = 0; i < 8; ++i) {
    //         if (b[i+p[i]]) ok=0;
    //         b[i+7-p[i]]=1;
    //     }
    // } while (next_permutation(p, p+8));
    // cout << ans;

    // ??????R??????U??????????????????????????LD????D?

    // const int mxN=2e5;
    // int n,m,k,a[mxN],b[mxN];
    // cin >> n >> m >>k;
    
    // int n,m,f,l;
    // cin >> n >> m >> f >> l;
    // cout << (m+f+l-n) << ' ' << (n-f-l) << ' ' << (n-l-m);

    // while(n) {
    //     cout << n%10;
    //     n/=10;
    // } reverses number

    // long long n = 0;
    // long long m = 0;
    // std::cin >> n >> m;
    // std::vector<long long> fib(2);
    // fib[0] = 0;
    // fib[1] = 1;
    // long long t = 0;
    // for (long long j = 2; j < m*m+1; ++j) { 
    //     fib.push_back((fib[j - 1] + fib[j - 2]) % m);
    //     ++t;
    //     if ((fib[j] == 1) && (fib[j - 1] == 0)) break;
    // }

    // std::cout << fib[(n % t)] << std::endl;

    // int n, m;
    // cin >> n >> m;
    // vector<int> v(n);
    // iota(v.begin(), v.end(), 1);

    // vector<int> perm;
    
    // do {
    //     if (!--m) {
    //         perm = v;
    //         break;
    //     }
    // } while (next_permutation(v.begin(), v.end()));

    // for (auto i : v) cout << i << ' ';

    // int n;
    // cin >> n;
    // ll ans = -1e18, msf=-1e18;
    // for (int i = 0; i < n; ++i) {
    //     int a;
    //     cin >> a;
    //     msf = max(0LL+a, msf+a);
    //     ans = max(msf, ans);
    // }
    // cout << ans;

    // int n;
    // cin >> n;
    // list<pair<int,int>> lr;

    // for (int i = 0; i <n;++i) {
    //     int l,r;
    //     cin >> l >>r;
    //     lr.push_back(make_pair(l,r));
    // }

    // lr.sort([](pair<int,int> &a, pair<int,int> &b) {return a.second<b.second;});
    // vector<int> points;
    // while (!lr.empty()) {
    //     int p = lr.front().second;
    //     points.push_back(p);
    //     while (1) {
    //         if (!lr.empty() && lr.front().first <= p) lr.pop_front();
    //         else break;
    //     }
    // }
    // cout << points.size() << endl;
    // for (auto i : points) cout << i << ' ';

    int n;
    cin >> n;
    int k = (int)(-1.0 + sqrt(1.0 + 8.0 * ((double)n))) / 2.0;
    cout << k << '\n';
    for (int i = 1; i<=k-1;++i) cout << i << " ";
    cout << (n - (k - 1) * k / 2) << endl;
}

