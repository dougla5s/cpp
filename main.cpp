#include <bits/stdc++.h>
using namespace std;
#define BRACKET "[]"
#define ll long long

template<typename T> ostream& operator << (ostream &op, const vector<T> &v) {cout << BRACKET[0]; for (const T& x : v) { v[v.size()-1] == x ? op << x : op << x << ", "; } cout << BRACKET[1]; return op;};
template<typename A, typename B> ostream& operator <<(ostream& op, const pair<A,B> &p) {return op << BRACKET[0] << p.first << ", " << p.second << BRACKET[1];};
template<typename T> istream& operator >> (istream &op, vector<T> &v) {string input; getline(op, input); istringstream iss(input); T num; while (iss >> num) v.push_back(num); return op;}

int summarize(vector<int> factors) {
    int ans = 0;

    for (const auto &f : factors) {
        ans += f;
    }
    return ans;
}

ll product(int n, int size) {
    return pow((ll)n, ((ll)size/2));
}

bool isPerfect(int n, int sumOfFactors) {
    return sumOfFactors - n == n ? true : false;
}

int primesBehind(int n) {
    return n / log(n);
}

vector<int> allFactors(int n) {
    vector<int> factors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    return factors;
}

vector<pair<int,int>> primeFactors(int n) {
    vector<pair<int, int>> factors;
    for (int i = 2; i * i <= n; i++) {
        if (n%i==0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            factors.push_back({i, count});
        }
    }
    if (n > 1) {
        factors.push_back({n, 1});
    }
    return factors;
}




/* <----------------------> */




bool prime(int n) {
    if (n < 2) return false;
    for (int x = 2; x*x <= n; x++) {
        if (n%x == 0) return false;
    }
    return true;
}
int _gcd(int a, int b) {
    if (b==0) return a;
    return _gcd(b, a%b);
}

int fact(int n) {
    return (n<=1) ? 1 : fact(n-1) * n;
}

int fib(int n) {
    return (n<=1) ? : (fib(n-1)+fib(n-2));
}

int mex(vector<int> v) {
    int sum=0,mx=0;
    for (auto i : v) {
        mx=max(i,mx); 
        sum+=i;
    }
    return (mx*(mx+1)/2)-sum;
}

void solve() {
    // int n,ans=0;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;

    // for (int i = 1; i < a.size()-1;++i) {
    //     ans=max((a[i-1]+a[i]+a[i+1]), ans);
    // }
    // cout << ans;

    /* ######################################### */

    // int a,b,c,d;
    // cin >> a >> b >> c >> d;
    // vector<int> x;

    // for (int i = -100; i<=100; ++i) {
    //     if ((a*i*i*i) + (b*i*i) + (c*i) + d == 0) x.push_back(i);
    // }
    // sort(x.begin(), x.end());
    // for (auto i : x) if (x[x.size()-1] == i) cout << i; else cout << i << ' ';

    /* ######################################### */

    // uint32_t n,m;
    // cin >> n >> m;
    // if (!n && !m || !n && m) {cout << "Impossible"; return;} 
    // if (n && !m) {cout << n; return;}

    // pair<int,int> ans;
    // if (n > m) ans = {n, n+m-1};
    // if (n<m) ans = {m, n+m-1};
    // else {
    //     ans= {max(n,m), n+m-1};
    // }
    // cout << ans.first << ' ' << ans.second;

    /* ######################################### */

    // vector<int> v(31);
    // for (auto &i : v) cin >> i;
    // cout << accumulate(v.begin(), v.end(), 0)/27; // input -> 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 0 0 0 0

    /* ######################################### */

    // int n,m;
    // cin >> n >> m;
    // map<string, vector<int>> members;

    // for (int i = 0; i<n; ++i) {
    //     string name;
    //     cin >> name;

    //     int x;
    //     for (int i = 0; i<m; ++i) {cin >> x; members[name].push_back(x);}
    // }

    // pair<string, int> sum = {"", 1001};

    // for (auto &[name, times] : members) {
    //     int ts = accumulate(times.begin(), times.end(), NULL);
    //     if (min(ts, sum.second) == ts) {
    //         sum.first = name;
    //         sum.second = ts;
    //     }
    // }
    // cout << sum.first;

    /* ######################################### */

    // int n,m,i,j, c
    // cin >> n >> m >> i >> j >> c;
    // if (n*m % 2 == 0) cout << "equal"; 

    // else if (c - (i+j)%2 == 0) cout << "black"; //
    // else cout << "white";

    /* ######################################### */

    // char f[9];
    // for (int i = 0; i<9; ++i) {
    //     cin >> f[i];
    // }
    // set<int> t = {f[0]+f[1]+f[2], f[3]+f[4]+f[5], f[6]+f[7]+f[8], f[0]+ f[3]+ f[6], f[1]+ f[4]+ f[7], f[2]+f[5]+f[8], f[0]+f[4]+f[8], f[2]+f[4]+f[6]};
    // if (count(t.begin(), t.end(), 88*3)) {
    //     cout << "Win";
    // }
    // else if (count(t.begin(), t.end(), 79*3)){
    //     cout << "Lose";
    // }
    // else cout << "Draw";

    /* ######################################### */

    // int a,b;
    // cin >> a >> b;
    // cout << a*b/_gcd(a,b);

    /* ######################################### */

    // string s, ans;
    // cin >> s;
    // int z = 0, c;

    // for (int i : s) {
    //     if (i == 48) z++;
    //     if (i==49 && z!=0) {cout << (char)(97+z); z=0; continue;}
    //     if (i==49) cout << 'a';
    // }

    /* ######################################### */

    // int x1,y1,x2,y2;
    // cin >> x1 >> y1 >> x2 >> y2;
    // int x,y;
    // cin >> x >> y;

    // if (x1 == x2) {
    //     cout << 2*x1-x << ' ' << y;
    // }
    // if (y1==y2) {
    //     cout << x << ' ' << 2*y1 - y;
    // }

    /* ######################################### */

    // ll n;
    // cin >> n;
    // ll mp = pow(3, n/3); // 13
    // if (n%3==1) mp = mp * 4 /3; // 13
    // if (n%3 == 2) mp = mp*2; 

    // cout << mp; 

    /* ######################################### */

    // int n, sum=0;
    // cin >> n;
    // vector<int> ns(n);
    // for (auto &i : ns) cin >> i;

    // vector<int> pos, neg;

    // for (int i = 0; i < n; ++i) {
    //     if (ns[i] < 0) neg.push_back(ns[i]);
    //     else pos.push_back(ns[i]);
    // }

    // if (abs(accumulate(pos.begin(),pos.end(),NULL)) > abs(accumulate(neg.begin(), neg.end(), NULL))) {
    //     cout << pos.size() << endl;
    //     for (auto i : pos) cout<< find(ns.begin(), ns.end(), i)-ns.begin()+1<< ' ';
    // } else {
    //     cout << neg.size() << endl;
    //     for (auto i : neg) cout << find(ns.begin(), ns.end(), i)-ns.begin()+1 << ' ';
    // }

    /* ######################################### */

    // string s;
    // cin >> s;
    // int ans=0,c=1;
    // char prev = 'A';
    // for (char i : s) {
    //     if (i==prev) {++c;ans=max(ans, c);}
    //     else {c=1;prev = i;}
    // }
    // cout << ans;

    /* ######################################### */

    // int n,mx=0;
    // ll ans= 0;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;
    //     cin >> x;
    //     mx=max(x,mx);
    //     ans+=mx-x;
    // }
    // cout << ans;

    /* ######################################### */

    // int n;
    // cin >> n;
    // if (n==1) {cout << 1; return;}
    // if (n==2||n==3) {cout << "NO SOLUTION"; return;}
    // if (n%2==0) {
    //     for (int i = 2; i<=n; i+=2) cout << i << ' ';
    //     for (int i = 1; i<=n; i+=2) cout << i << ' ';
    // } 
    // else {
    //     for (int i = n-1; i>0; i-=2) cout << i << ' ';
    //     for (int i = n; i>0; i-=2) cout << i << ' ';
    // }

    /* ######################################### */

    // int n,k;
    // cin >> n >> k;
    // cout << fact(n)/(fact(k)*fact(n-k));
    
    /* ######################################### */

    // string s;
    // cin >> s;

    // int count=1;
    // char prev = s[0];

    // s = string(s.begin()+1, s.end()+1);
    // vector<pair<char,int>> v;
    // vector<char> nums = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
    // for (char &c : s) {
    //     if (prev==c) ++count;
    //     else if (prev!=c) {
    //         v.push_back({prev, count});
    //         count=1;
    //     }
    //     prev=c;
    // }

    // for (auto i : v) {
    //     if (i.second == 1) cout << i.first;
    //     if (i.second>=2) cout << i.first << i.second;
    // }

    /* ######################################### */

    // ll t;
    // cin >> t;
    // while(t--) {
    //     ll y,x;
    //     cin >> y >> x;
    //     ll z = max(y,x);
    //     ll z2 = (z-1)*(z-1), ans;
    //     if (z%2) {
    //         if (y==z) ans = z2+x;
    //         else ans = z2 + 2*z - y;
    //     } else {
    //         if (x==z) ans = z2+y;
    //         else ans = z2+2*z-x;
    //     }
    //     cout << ans;
    // }

    /* ######################################### */
    
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; ++i) {
    //     ll a1=i*i, a2=a1*(a1-1)/2;
    //     if (i>2) a2-=4*(i-1)*(i-2);
    //     cout << a2 << '\n';
    // }

    /* ######################################### */

    // Cathalan nums (parenthesis)
    // int n;
    // cin>> n;
    // cout << 'C'<< n << '=' <<1.0/(n+1)*(fact(2*n)/(fact(n)*fact(2*n-n)));

    // inclusion-exclusion

    // set<int> a,b,c;
    // a = {1,2,3};
    // b = {2,3,4,5};
    // for (auto i : a) if (count(b.begin(), b.end(), i)) c.insert(i);
    
    // cout << a.size() + b.size() - c.size();

    // necklace

    // int n,m,ans=0;
    // cin >> n >> m;
    // for (int k = 0; k<n; ++k) ans+=pow(m, _gcd(k, n));
    // cout << ans/n;

    // matrices -> matrix.cpp

    // probability -> probability.cpp

    // int x1,y1,x2,y2;
    // cin >> x1 >> y1 >>x2 >> y2;

    // int n;
    // cin >> n;
    // int k=0,i=1;
    // while (i<=n && k==0) {
    //     int x,y;
    //     cin >> x >> y;
    //     if (4*pow(x-x1, 2) + pow(y-y1,2) <= pow(x-x2, 2) + pow(y-y2, 2)) k=i;
    //     ++i;
    // }
    // if (k==0) cout << "NO";
    // else cout << k;

    // string a;
    // vector<string> b(3);
    // cin >> a;
    // for (auto &i : b) cin >> i;
    // cout << a << ": ";
    // sort(b.begin(),b.end());
    // for (auto i : b) i!=*(b.end()-1)? cout << i << ", " : cout << i;

    // int n,ans=0;
    // string s;
    // cin >> n;
    // while (n--) {
    //     cin >> s;
    //     if (s[0] == s[3]) ++ans;
    // }
    // cout << ans;

    // int n, s=0;
    // cin >> n;
    // int heap[n];
    // for (int &i : heap) cin >> i;
    //     // nim sum
    // for (auto x : heap) s^=x;
    // int winningMove = -1;

    // for (int i = 0; i<n; ++i) {
    //     if (heap[i] ^ s < heap[i]) {
    //         winningMove= i;
    //         break;
    //     }
    // }
    // if (winningMove !=-1) {
    //     int rm = heap[winningMove] - (heap[winningMove]^s);
    //     heap[winningMove]-=rm;

    //     cout << "removed " << rm << " stick(s) from heap " << winningMove+1 << endl;
    //     for (auto i : heap) { 
    //         cout << i << ' ';
    //     }
    //     cout << '\n';
    // }


    //Geometry


    // using point_t = complex<double>;
    // point_t p= {1,1};

    // cout << arg(p) << '\n';
    // p*=polar(1.0,0.785398);
    // cout << arg(p);

    // using point_t = complex<double>;
    // vector<point_t> polygon = {{4,1},{4,3},{2,4},{5,5},{7,3}, {4,1}};
    // double sum=0;

    // for (int i = 0; i<polygon.size()-1; ++i) {
    //     sum += (polygon[i].real()*polygon[i+1].imag())-(polygon[i+1].real()*polygon[i].imag());
    // }
    // cout << (1.0/2)*abs(sum);




    //Sweeping lines

    // int n;
    // cin >> n;
    // vector<int> append(n), leave(n);
    // for (int i = 0; i<n; ++i) {
    //     cin >> append[i] >> leave[i];
    // }

    // int ans=0, c=0;

    // sort(append.begin(), append.end());
    // sort(leave.begin(), leave.end());

    // for (int i = 0; i<n; ++i) {
    //     if (append[i]<=leave[i]) {
    //         ++c;
    //         if (c > ans) ans = c;
    //     }
    //     else {
    //         --c;
    //     }
    // }
    // cout << ans;




    // ll n;
    // cin >> n;
    // ll ans=0;
    // for (ll i = 5; i<=n; i*=i) {
    //     ans+=n/i;
    // }
    // cout << ans;

    // f(n) = SUM[i=1->k] [ n / 5^i ]

    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;
        (a+b)%3 ? cout << "NO" << '\n' : cout << "YES" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    solve();

    return 0;
}