#include <bits/stdc++.h>
using namespace std;
template<typename T> inline isz(T _x) {return int((_x).size());};
#define ll long long
void solve() {
    //A
    // int x,y,z,m;
    // cin >> x >> y >> z >> m;
    // auto count = [&](int now, int interval) -> int {
    //     return ((now+interval-1)/interval * interval) - now;
    // };
    // int x1 = count(m, 15) + x;
    // int y1 = count(m, 10) + y;
    // int z1 = count(m, 5) + z;

    // int ans = min(min(z1, y1), x1);
    // cout << ans << '\n';

    //B
    // int n,k;
    // cin >> n >> k;
    // int n1 = n/2 + 1;
    // int n2 = k / 2 + 1;
    // cout << n1 * n2 << '\n';

    //C

    // int a,b,n,m;
    // cin >> a >> b >> n >> m;
    // int l = max(n+(n-1) * a, m+(m-1) * b); // левая граница ()
    // int r = min(n+(n+1) * a, m+(m+1) * b);
    // if (l<=r) cout << l << ' ' << r << '\n';
    // else cout << -1 << '\n';





    // 6
    //a
    // int m,x,y,w,h;
    // cin >> m >> x >> y >> w >> h;

    // int a = ((h + m - 1) / m) + (y%m ? 1 - y/m : 0);
    // int b = ((w + m - 1) / m) + (x%m ? 1 - x/m : 0);
    // cout << abs(a*b) << '\n';

    //правильное решение
    // int a=(((x+w-1)/m) - x/m) + 1; // находим как разность отрезков ceil(w/m) и floor(x/m) + 1
    // int b=(((y+h-1)/m) - y/m) + 1; // так же как и сверху
    // cout <<a*b << '\n'; // площадь прямоугольника

    //b

    // int a,b;
    // cin >> a >> b;

    // int rows = (b + a - 1) / a;
    // int col = max(1, (b%a)-1);
    // cout << rows << ' ' << col << '\n'; 

    //правильное решение

    // --b; // уменьшаем на 1 чтобы вести нумерацию с нуля
    // int rows = b / (2*a+1); // кол-во пар рядов (2*a+1 это одна пара, четный + нечетный ряд <=> цикличность)
    // b%=2*a+1; // получаем номер места в паре из двух рядов
    // cout << (b < a ? 2 * rows + 1 : 2 * rows + 2) << ' ' << (b<a ? b+1 : b+1-a) << '\n';
    // 1-oe число (ряд) => если номер места меньше количества сидений в ряду -> выводим ряд
    // 2-oe число (место) => если номер места меньше кол-ва сидений в ряду -> место + 1, иначе место + 1 - кол-во мест в неч. ряду

    //c

    // int n,m;
    // cin >> n >> m;

    // if (n==1&&m==1) cout << 1 << '\n';
    // else cout << (n == 1 || m == 1 ? (n*m/2) + 1 : (n*m) / 2) << '\n';

    // правильное решение
    // cout << (n * m + 1)/ 2 << '\n';

    //d

    // int a,b,c;
    // cin >> a >> b >> c;

    // cout << ((a+b+c) % 5) + min(min(a,b), c) << '\n';

    // правильное решение
    // int k = min(min(a,c), b/2), ans; // инициализируем переменную в которой храним кол-во циклов
    // a-=k; // вычитаем, сколько потрачено воды за цикл
    // b-=2*k; // вычитаем в 2 раза больше т.к. за цикл мы проходим по: 1 2 3 2 бочкам
    // c-=k;
    // if (a==0) ans = 4*k; // если закончилось в a, значит ответ это 4* кол-во циклов (в одном цикле мы тратим только 4 литра за все бочки)
    // else if (b==0) ans = 4*k+1; // рассматриваем все ост. случаи
    // else if (c==0) ans = 4*k+2;
    // else ans = 4*k+3;
    // cout << ans << '\n'; // выводим ответ

    // int n,x,s=0;
    // cin >> n >> x;
    // vector<int> a(n);
    // for (auto &i : a) {cin >> i;s+=i;}
    // int bad=0, space=2*x-s; // кол-во злых и кол-во свободных мест в автобусе
    // for (int i = 0; i < n; ++i) { 
    //     if (a[i]&1) { // если членов семьи нечетное колво
    //         if (space>0) c--; // и есть место в автобусе мы садим туда человека
    //         else ++bad; // в противном случае ++бэд
    //     }
    // }
    // cout << s - bad << '\n'; // из всех людей вычитаем кол-во плохих получаем хороших

    //b

    // int n, m, ans=0;
    // string s;
    // cin >> n >> m >> s;
    // for (int i = 'A'; i < 'H'; ++i) {
    //     int c = count(s.begin(), s.end(), (char )i);
    //     ans += max(0, m - c);
    // }
    // cout << ans << '\n';








    /*int n, q;
    cin>>n>>q;
    vector<array<int, 2>> pawns(n, {0,0});
    for (auto &[xp, yp] : pawns) cin >> xp >> yp;
    for (int i = 0; i<q; ++i) {
        int x,y;
        cin >> x >> y;

        array<int, 2> pawn = {(int)1e9, (int)1e9}; // the closest pawn
        for (auto &[xp, yp] : pawns) {
            if (abs(pawn[0]-x) >= abs(x-xp) && abs(pawn[1]-x) >= abs(y-yp)) pawn = {xp, yp};
        }
        int xp = pawn[0];
        int yp = pawn[1];

        int c=0;

        while (abs(x-xp) > 0 || abs(y-yp) > 0) {
            if (abs(x-xp) > 0) {
                if (x-xp > 0) --x;
                else ++x; // if (x-xp < 0)
            }
            if (abs(y-yp) > 0) {
                if (y-yp > 0) --y;
                else ++y; // if (y-yp < 0)
            }
            // cout << x << ' ' << y << '\n'; //DEBUG
            ++c;
        }

        cout << c << '\n';
    } */       
    
    // int n, k;
    // cin>> n >> k;
    // cout << max((n+k-1)/k, (n+k-1)/k) << '\n';
    // int n;
    // cin >> n;
    // if ((n*(n+1)/2)&1) cout << "IMPOSSIBLE\n";
    // else {
    //     int s = n*(n+1)/4;
    //     for (int i = 1; i <= n; ++i) {

    //     }
    // }

    //1
    // long long a,b,n;
    // cin >> a >> b >> n;
    // long long c = n/(a*b+1);
    // long long days = c*a;
    // n%=(a*b+1);
    // if (n>=b+1) {
    //     ++days;
    //     n-=b+1;
    //     days+=n/b;
    // }
    // cout << max(0LL, days) << '\n';

    //2
    // int n,m,a,b;
    // cin >> n >> m >> a >> b;
    // cout << (n*m) - (a*m + b*n - a*b) << '\n';

    // long long n;
    // cin >> n;
    // long long d=1;
    // while (1) {
    //     long long t=d*n;
    //     long long r = (long long) sqrt(t);
    //     if (r*r == t) {cout << d << '\n';return;}
    //     ++d;
    // }

    // int n,l,k;
    // string num;
    // cin >> n >> l >> k >> num;
    // vector<string> nums(n);
    // for (auto &i : nums) cin >> i;
    // int c = 0;
    // for (auto i : nums) {
    //     long long s1=0, s2=0;
    //     long long mis = 0;
    //     for (int j = 0; j<l; ++j) {
    //         s1+=num[j];
    //         s2+=i[j];
    //         if (num[j]!=i[j]) ++mis; 
    //         if (mis>k) break;
    //     }
    //     if (mis <= k && s1-s2==0) ++c;
    // }
    // cout << c << '\n';

    // int a,b,c,d;
    // cin >> a >> b >> c >> d;
    // if (!b && !c) cout << max(a,d);
    // else cout << a+d+min(b,c)*2 + (b==c ? 0 : 1) << '\n';


    //D round 981 div3
    /*int n;
    long long ans=0;
    cin >> n;
    vector<int> p(n);
    for (auto &i : p) cin >> i;
    vector<bool> visited(n+1, false);
    for (int i = 1; i <= n; ++i ) {
        if (!visited[i]) {
            int c = 0;
            int j = i;
            while(!visited[j]) {
                visited[j]=true;
                j=p[j-1];
                ++c;
            }
            ans+=(c-1)/2;
        }
    }
    cout << ans << '\n';*/

    // typedef long long ll;

    // int n,k;
    // cin >> n >> k;

    // auto fib = [&](ll n, ll k) -> ll {
    //     const int MOD = 1e9+7;
    //     ll f1=1,f2=1;
    //     int index = 2;
    //     int c=0;
    //     while (1) {
    //         ll f3 = (f1+f2) % k;
    //         ++index;
    //         if (f3%k==0) {
    //             ++c;
    //             if (c==n) {return index%MOD;}
    //         }
    //         f1=f2;
    //         f2=f3;
    //     }
    // };
    // cout << fib(n,k) << '\n';

    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (int &i : a) cin >> i;
    // for (int i = 1; i < n/2; ++i) {
    //     if (a[i] == a[i-1] || a[n-i] == a[n-i-1]) swap(a[i], a[n-i-1]);
    // }
    // int ans = 0 ;
    // for (int i = 0; i < n-1; ++i) a[i]==a[i+1] ? ++ans : 0;
    // cout << ans << '\n';
    // i64 n,m;
    // cin >> n >> m;
    // vector<i64> a(n);
    // vector<i64> b(m);
    // for (auto &i : a) cin >> i;
    // for (auto &i : b) cin >> i;
    // for (int i = 1; i<n; ++i) {
    //     gcd(a[i], a[0]);
    // }

    typedef long long i64;
    //c. малинки
    // int n,k,ans=1e9,c=0;
    // i64 p=1;
    // cin >> n >> k;
    // vector<int> a(n);
    // for (auto &i : a) {cin >> i; c+=i%2==0;}

    // if (k==4) ans = max(0,2-c);   
    // for (auto &i : a) {
    //     int rem = i%k;
    //     if (rem==0) ans=0;
    //     ans = min(ans, k-rem);
    // }
    // cout << ans << '\n';




    //#############################################################//
    //global 27 codeforces

    //a
    // int n=0,c=0, prev='1';
    // cin >> n;
    // string num;
    // cin >> num;
    // string ans;
    // for (auto i : num) {
    //     if ((i==prev && i=='1') || (i!=prev && prev=='0')) ++c;
    //     else if (i==prev && prev=='0') ans.push_back('0');
    //     else {
    //         ans.push_back(c + '0');
    //         c=1;
    //     }
    //     prev = i;
    // }
    // cout << ans << '\n';

    //b
    // int n;
    // cin >> n;
    // if (n==1 || n==3) {
    //     cout << -1 << '\n';
    //     return;
    // }
    // else if (n==2) {cout << 66 << '\n'; return;}
    // else {
    //     string ans(n-3, '3');
    //     cout << ans << "366" << '\n';
    // }

    //d global 27
    //   auto cmp = [&](int x,int y, int z) -> bool {
    //     if (z>30) return 1;
    //     return x<y* (1LL<<z);
    // };
    // const int MOD = (int)1e9 + 7;
    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;
    // vector<ll> dp(n*32+1);
    // dp[0]=1;
    // for (int i = 1; i<=n*32; ++i) {
    //     dp[i]= dp[i-1]*2%MOD;
    // }
    // ll ans = 0;
    // int val_size = 0;
    // vector<int> valx(n);
    // vector<int> valy(n);
    // for (int i = 0; i<n; ++i) {
    //     int x = a[i], y=0;
    //     while (x%2==0) {
    //         x/=2;
    //         ++y;
    //     }
    //     while (val_size > 0 && cmp(valx[val_size - 1], x, y)) {
    //             ans = (ans-valx[val_size-1] * dp[valy[val_size - 1]] % MOD + MOD)% MOD;
    //             ans = (ans+valx[val_size-1]) % MOD;
    //             y +=valy[val_size -1];
    //             val_size--;
    //         }

    //         valx[val_size] = x;
    //         valy[val_size] = y;
    //         val_size++;
    //         ans =(ans+valx[val_size-1]*dp[valy[val_size-1]]) % MOD;
    //         cout << ans << " ";
    // }
    // cout << '\n';




    // auto prefix_sum = [&](vector<int> a) -> vector<i64> {
    //     vector<i64> pref_sum(isz(a)+1,0);
    //     for (int i = 0; i < isz(a) ;++i) {
    //         pref_sum[i+1] = pref_sum[i] + a[i];
    //     }
    //     return pref_sum;
    // };

    // int n, q;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;
    // cin >> q;

    // vector<i64> ps = prefix_sum(a);
    // vector<i64> bps((n*(n+1)/2)+1 , 0);
    // int index=1;
    // for (int i = 0; i<n;++i) {
    //     for (int j = 0; j<n;++j) {
    //         bps[index] = bps[index-1]+ (ps[j+1]-ps[i]);
    //         ++index;
    //     }
    // }
    // while(q--) {
    //     int l,r;
    //     cin >> l >> r;
    //     cout << bps[r]-bps[l-1]<<'\n';
    // }

    // int n;
    // string s;
    // cin >> n >> s;
    // ll ans = 0;
    // for (int i = n-1, left = 0; i >= 0; i--) {
    //     if (s[i] == '0') {
    //         left = max(0, left-1);
    //         ans += i+1;
    //         continue;
    //     }
    //     if (left+1 > i) {
    //         left = max(0, left-1);
    //         ans += i+1;
    //     } else 
    //         left++;
    // }
 
    // cout << ans << '\n';



    //900* B reordering array
    // int n,ans=0;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;
    // sort(a.begin(), a.end(), [](int x,int y) {
    //     return x%2<y%2;
    // }); // сначала чётные, потом нечетные
    // for (int i = 0; i < n; ++i) {    //                        i|i+1|
    //     for (int j = i+1; j<n;++j) { // следующий элемент от ------------->
    //                                  //                        j|j+1|j+2|
    //         ans+= (__gcd(a[i], 2*a[j]) > 1);//добавляем в ответ по единице если пару можно сформировать
    //     }
    // }
    // cout << ans << '\n';

    // ~~~~~~~~~~~~~~~ АЛГОРИТМ ПОИСКА ВТОРОГО МАКСИМУМА В МАССИВЕ O(N) ~~~~~~~~~~~~~~

    // vector<int> a = {1,5,2,8,9,12,6};
    // int mx1=max(a[0],a[1]), mx2=min(a[0],a[1]);
    // for (int i = 2; i<isz(a); ++i) {
    //     if (a[i] > mx1) {
    //         mx2=mx1;
    //         mx1=a[i];
    //     }
    //     else if (a[i]>mx2) mx2=a[i];
    // }
    // cout << mx1 << ' ' << mx2;

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    // int n,m,d, mnx=1e9,mny=1e9;
    // cin >> n >> m >> d;
    // for (int _ = 0; _ < d; ++_) {
    //     int x,y;
    //     cin >> x >> y;
    //     mnx = min(mnx, x);
    //     mny = min(mny, y);
    // }
    // cout << (i64)mnx * mny << ' ' << d << '\n';

    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;
    // int min_n=1e9, min_p=1e9, max_p=-1e9;
    // for (int i = 0; i <n; ++i ) {
    //     if (a[i] > max_p) max_p = a[i];
    //     else if (a[i] < min_n) min_n = a[i];
    //     else if (a[i] >= 0 && a[i] < min_p) min_p = a[i];
    // }
    // cout << min(min_n*max_p, min_p*max_p) << '\n'; // 10/21
    
    // int n,mx=0,mh=0,col=0;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;
    // sort(a.rbegin(), a.rend());
    // for (int i = 0; i<n;++i) {
    //     col = 
    // }

    // auto f = [&](int n) -> int {
    //     int c=0;
    //     for (int i = 2; i*i<=n; ++i) {
    //         if (n%i==0) {while (n%i==0) n/=i;++c;}
    //     }
    //     if (n>1) ++c;
    //     return c;
    // };
    
        // long long n;
        // long long k=1;
        // cin >> n;
        // vector<long long> a(n);
        // for (auto &i : a) {
        //     cin >> i;
        //     while (i%2==0) {
        //         i/=2;
        //         k*=2;
        //     }
        // }
        // (*max_element(a.begin(),a.end()))*=k;
        // cout << accumulate(a.begin(),a.end(), NULL) << '\n';


    // int a,b;
    // int k = abs(a-b);
    // cin >> a >> b;
    // cout << k << ' ' << min(a%k, k - (a%k)) << '\n';


    // int n, k;
    // long long s=0;
    // cin >> n >> k;
    // unordered_map<int, vector<int>> costs;
    // for (int i = 0; i<k; ++i) {
    //     int b,c;
    //     cin >> b >> c;
    //     costs[b].push_back(c);
    // }
    // vector<i64> total;
    // for (auto &[b,c] : costs) {
    //     sort(c.rbegin(), c.rend());
    //     long long s = 0;
    //     for (auto i : c) s+=i;
    //     total.push_back(s);
    // }
    // sort(total.rbegin(), total.rend());
    // long long sum = 0;
    // for (int i = 0 ; i < min(n,(int)total.size());++i) sum+=total[i];
    // cout << sum << '\n';




    // string s;
    // int q;
    // bool ok = (s.find("1100") != string::npos ? 1 : 0);
    // cin >> s >> q;
    // for (int _ = 0; _ < q; ++_) {
    //     int index;
    //     char v;
    //     ok=0;
    //     cin >> index >> v;
    //     s[index-1] = v;
    //     if (s.find("1100", max(0, index-4))) ok = 1;
    //     cout << (ok ? "YES\n" : "NO\n");
    // }

    // int n,m;
    // cin >> n >>m;
    // string s="";
    // vector<vector<int>> v(n, vector<int>(m));
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0 ; j < m; ++j) {
    //         cin >> v[i][j];
    //     }
    // }

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0 ; j < m; ++j) {
    //         if ()
    //     }
    // }


    // auto Check = [&](int i, string s) -> bool {
    //     if (i<0) return false;
    //     if (i >= s.size()-3) return false;
    //     if (s[i] == '1' && s[i+1] == '1' && s[i+2]=='0' && s[i+3] =='0') return 1;
    //     return false;
    // };
    // string s;
    // int q, c=0;
    // cin >> s >> q;
    // for (int i = 0 ; i < s.size(); ++i)
    //     if (Check(i, s)) ++c;

    // while (q--) {
    //     int it;
    //     char v;
    //     cin >> it >> v; it--;
    //     if (s[it]!=v) {
    //         bool before, after;
    //         for (int i = 3; ~i; --i) before |= Check(it-i, s);
    //         s[it] = v;
    //         for (int i = 3; ~i; --i) after |= Check(it-i, s);
    //         c+= (after-before);
    //     }
    //     cout << (c ? "YES\n" : "NO\n");
    // }


    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >> i;
    // sort(a.begin(),a.end());
    // int mn = a[1]-a[0], c=1;
    // for (int i = 2 ; i < n; ++i) {
    //     int diff = a[i]-a[i-1];
    //     if (diff < mn){
    //         mn = diff;
    //         c=1;
    //     }
    //     else if (diff == mn) ++c;
    // }
    // cout << mn << ' ' << c << '\n';

    // string s;
    // cin >> s;
    // if (is_sorted(s.begin(), s.end())) {
    //     cout << s << '\n';
    //     return;
    // }
    // int it = 0;
    // while (it!=s.size()-1 && s[it]<=s[it+1]) ++it;
    
    // int n;
    // cin >> n;
    // int a[n];
    // for (int &i : a) cin >> i;
    // sort(a, a+n);
    // cout << a[(n-1)/2] << '\n';


    

    // int n,mx=-1,cnt=0;
    // cin >> n;
    // vector<int> a(n); for(auto &i : a) cin >> i;
    // a.push_back(-1e9);
    // for (int i = 1; i<n+1;++i) {
    //     if (a[i]> a[i-1]) ++cnt;
    //     else {
    //         mx=max(mx, cnt);
    //         cnt=1;
    //     }
    // }
    // cout << mx << '\n';


    // КИНОТЕАТР РЕШЕНИЕ
    // int n,k;
    // cin >> n >> k;
    // --k;
    // int r = k/(2*n+1);
    // k%=2*n+1;
    // cout << (k<n ? 2*r + 1 : 2*r+2) << ' ' << (k<n ? k+1 : k+1-n) << '\n';

    // auto isPalindrome = [&](string s) -> bool {
    //     string rev = s;
    //     reverse(rev.begin(),rev.end());
    //     if (rev==s) return true;
    //     else return false;
    // };

    // string s;
    // cin >> s;
    // int l = 0, r = s.size()-1;
    // string s1 = s, s2=s;
    // while (l<r) {
    //     if (s[l]!=s[r]) {
    //         s1.erase(l,1);
    //         s2.erase(r,1);
    //         if (isPalindrome(s1)) {cout << l+1 << '\n';return;}
    //         else if (isPalindrome(s2)) {cout << r+1 << '\n';return;}
    //         break;
    //     }
    //     ++l;
    //     --r;
    // }
    // s.erase(s.size()/2, 1);
    // if (isPalindrome(s)) cout << (s.size()/2) +1 << '\n';
    // else cout << "0\n";


    // string s;
    // cin >> s;
    // int h = ((s[0]-'0') * 10) + s[1]-'0';
    // int m = ((s[3]-'0') * 10) + s[4]-'0';
    // cout << h%24 << ':' << m

    // int l,r,k;
    // ll ans = 0;
    // cin >> l >> r >> k;
    // int i = l, j = r;
    // while (i <= j) {
    //     ll mid = i + (j-i)/2;
    //     ll c = mid*k;
    //     if (c <= r) {
    //         i = mid+1;
    //         ans = max(ans, mid-l+1);
    //     } else j = mid-1;
    // }
    // cout << ans << '\n';

    // int n,cnt=0;
    // cin >> n;
    // string s1,s2;
    // cin >> s1 >> s2;
    // for (int i = 0;i < n-1; ++i) 
    //     if (s1[i] != s1[i+1])
    // if (cnt < s2.size()) {cout << "NO\n";return;}
    // for (int i = 0; i < s2.size(); ++i) {
    //     if (s1[i]==s2[i]) continue;
    //     if (i>0 && s1[i-1]==s1[i]) {cout << "NO\n";return;}
    // }
    // cout << "YES\n";

    //a
    // int n, ans1,ans2, ph = 1e9, lh=1e9, c=0, best=0;
    // cin >> n;
    // for (int i = 1; i<=n; ++i) {
    //     int x;
    //     cin >> x;
    //     if (x == lh) ++c;
    //     else {
    //         if ((ph < lh && lh > x) && c < best) {
    //             best = c;
    //             ans1 = i-c-1;
    //             ans2 = i;
    //         }
            
    //     }
    //     ph = lh;
    //         lh = x;
    //         c=1;
    // }
    // if (!ans1) cout << "0\n";
    // else cout << ans1 << ' ' << ans2 << '\n';



    // int sum = 0;
    // string s;
    // cin >> s;
    // for (int i = 0 ; i < s.size()-1; ++i) sum += (s[i]-'0');
    // for (int i = 0; i < s.size()-1; ++i) {
    //     if (s[i]=='9') continue;
    //     int r = sum % 3;
    //     if ((s[i]-'0') + r < 10) {s[i] = (char)(r+(s[i]-'0')) + '0'; break;}
    // }
    // cout << s << '\n';
    // auto section = [&](int n) -> int {
    //     if (n<=36) return ((n-1)/4);
    //     else return (8 - ((n-37)/2));
    // };

    // vector<int> a(9, 0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i) {
    //     int x;
    //     cin >> x;
    //     a[section(x)]++;
    // }

    // int mx=-1,c=0;
    // for (int i = 0; i < 9; ++i) {
    //     if (a[i]==6) {
    //         ++c;
    //         mx=max(mx,c);
    //     }
    //     else c=0;
    // }
    // cout << mx << '\n';

    // int h,m, x;
    // scanf("%d:%d\n%d", &h, &m, &x);
    // h=(h+((m+x)/60))%24;
    // m = (m+x)%60;
    // printf("%02d:%02d", h, m);

    // int n,m,q;
    // cin >>n >> m >> q;
    // bool ok = 1;
    // int a[n];
    // set<int> b;
    // for (int i = 0; i < n; ++i) cin >> a[i];
    // for (int i = 0 ; i < m; ++i) {int x; cin >> x; b.insert(x);}
    // for (int i = 0 ; i <min(n, (int)b.size()); ++i) {
    //     if (a[i] != b[i]) {
    //         cout << "TIDAK\n";
    //         ok=0;
    //         break;
    //     }
    // }
    // if (ok) cout << "YA\n";

    // int n,s,m;
    // cin >> n >> s >> m;
    // for (int i = 0 ; i < n; ++i) 
    // {
    //     int l,r;
    //     cin >> l >> r;
    //     m-=abs(l-r);
    // }
    // cout << (m >= s ? "YES\n" : "NO\n");



    //1
    // int h,m;
    // cin >> h >> m;
    // cout << (1440 - ((60*h) + m)) << '\n';


    // int n,c=0;
    // cin >> n;
    // int a[n];
    // for (auto &i : a) cin>> i;
    // for (int i = 1 ; i < n, c!=3; ++i ) {
    //     if (a[i-1] < a[i]) {cout << i << ' ';++c;}
    // }

    // int mx = 0,mn=a[0];
    // for (int i =0 ;i < n;++i) {
    //     mx = max( a[i] - mn, mx);
    //     mn=min(a[i], mn);
    // }
    // cout << mx <<'\n';


    // string s;
    // cin >> s;
    // int c1=0,c2=0;
    // for (char i : s) {
    //     if (i >= 'a' && i <= 'z') c1+=1;
    //     else c2+=1;
    // }
    // if (c1>=c2) for (auto &i : s) i=tolower(i);
    // else for (auto &i : s) i = toupper(i);
    // cout << s << '\n';

    // int n,ans=0;
    // cin >> n;
    // int a[n];
    // for (int &i : a) cin >> i;
    // for (int i = 0 ; i < n-1; ++i) {
    //     if (a[i] != i+1) {
    //         if (a[i+1] == i+1 && a[i] == i+2) swap(a[i], a[i+1]);
    //         else {
    //             cout << "NO\n";
    //             return;
    //         }
    //     }
    // }
    // cout << "YES\n";
    // auto dis = [](int x1, int y1, int x2, int y2) -> i64 {
    //     return 1ll * (x2-x1) * (x2-x1) + 1ll * (y2-y1) * (y2-y1);
    // };
    // int n;
    // cin >> n;
    // vector<pair<int,int>> dots(n);
    // for (auto &[x,y] : dots) cin >> x >> y;

    // int x1,y1,xf,yf;
    // cin >> x1 >> y1 >> xf >> yf;

    // ll d = dis(x1,y1,xf,yf); // our dist
    // bool flg = 1;
    // for (auto &[x,y] : dots) {
    //     if (dis(x,y,xf,yf) <= d) flg=0;
    // }
    // cout << (flg ? "YES\n":"NO\n");




    // int n,b,p;
    // // cin >> n >> b >> p;
    // int bottles = 0, towels = n*p;


    // while (n>1) {
    //     int p = __lg(n);
    //     int participants = (1<<p);
    //     b += (participants/2) * (2*b+1);
    //     n=(n-participants) + (participants/2);
    // }

    // cout << (n-1)*(2*b+1) << ' ' << n*p << '\n';

    //1
    // int n,m;
    // cin >> n >> m;
    // vector<vector<int>> bus(n, vector<int>(4,0));


    // //сажание
    // for (int i = 0 ; i < m; ++i ) {
    //     if (i<2*n) bus[i/2][(i%2)*3] = i+1; // у окна ->  |x o   o x|
    //     else bus[(i-2*n)/2][(i%2)+1] = i+1;
    // }

    // //вывод
    // for (int i =0 ; i <n; ++i) {
    //     for (int j : {1,0,2,3})
    //         if (bus[i][j]) cout << bus[i][j] << ' ';
    // }
    // cout << '\n';

    //gusenica


    //goda

    // int y;
    // cin >> y;
    // auto check = [](int y) -> bool {return (y%400==0 || (y%4==0 && y%100!=0));}; // проверка високосного года
    
    // bool type = check(y);
    // int d=0;
    // do {
    //     ++d;
    //     if (check(y)) ++d;
    //     ++y;
    //     d%=7;
    // } while (d || check(y)!=type);
    // cout << y << '\n';


    //прикол
    /*int d{};//конструктор инта (по умолчанию 0)
    do { //сначала сделает а потом проверит
        d++;
    } while (0); // проверил и завершил цикл

    while (0) d++;// ничё не поменяется (условие неверно)
    cout << d;*/


//B
    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &i : a) cin >>i;
    // int l = 0, r=n-1;
    // sort(a.begin(),a.end());

    // int n1=0,n2=0;
    // while (l<r) {
    //     if (a[l]*a[r]+2==n) {
    //         n1=a[l];
    //         n2=a[r];
    //         break;
    //     }

    //     if (a[l]*a[r]+2 > n) r--;
    //     else ++l;
    // }
    // cout << n1 << ' ' << n2 << '\n';


//A
    // map<int,int> m;
    // int n,ans=0;
    // cin >> n;
    // int a[n];
    // for (auto &i : a) {cin >> i; m[i]++;}

    // for (auto &[i,j] : m) ans+=j/2;
    // cout << ans << '\n';

    // int n;
    // cin >> n;
    // int p[n];

    // auto check = [&](int x) -> bool {
    //     if (x<4) return 0;
    //     for (int i = 2; i*i <= x; ++i) {
    //         if (x%i) return 1;
    //     }
    //     return 0;
    // };

    // if (n==1 || n&1) {
    //     cout << "-1\n";
    //     return;
    // }
    // iota(p, p+n, 1);
    // for (int i = 0 ; i < n-1; ++i) {
    //     if (!(check(p[i] + p[i+1]))) swap(p[i], p[i+1]);
    // }

    // for (int i = 0; i < n-1; ++i) {
    //     if (!(check(p[i]+p[i+1]))) {
    //         cout << "-1\n";
    //         return;
    //     }
    // }
    // for (auto i : p) cout << i << ' ';
    // cout << '\n';

    // int n;
    // cin >> n;
    // if (n<=4) {
    //     cout << "-1\n";
    //     return;
    // }
    // cout << "1 3 ";
    // for (int i = 7;i<=n; i+=2) cout << i << ' ';
    // cout << "5 4 2 ";
    // for (int i = 6; i <= n;i+=2) cout << i << ' ';
    // cout << '\n';


    // разложение по ОТА
    /*auto factorization = [&](i64 n) {
        vector<pair<i64,i64>> f;
        i64 _n = n;
        for (i64 i = 2; i*i<=n;++i) {
        if (n%i==0) {
            i64 d=0;
            while (_n%i==0) {
                _n/=i;
                ++d;
            }
            f.push_back({i, d});
            }
        }
        return f;
    };
    auto d = [&](i64 n) {
        auto f = factorization(n);
        i64 p = 1;
        for (auto &[_,a] : f) p*=(a+1);
        return p;
    };

    auto theta = [&](i64 n) {
        auto f = factorization(n);
        i64 p=1;
        for (auto &[x,y] : f) {
            p*=(powl(x, y+1) - 1)/(x-1); // powl - возведение в степень -> long long (целые числа 64 бит)
        }
        return p;
    };

    i64 n;
    cin >> n;
    for (auto &[x,y] : factorization(n)) cout << "p: " << x << ' ' << "a: " << y << '\n';
    cout << "num of divisors: " << d(n) << '\n';
    cout << "sum of divisors: " << theta(n) << '\n'; */



//cf
    // int n,k,c=0;
    // cin >> n >> k;
    // int a[n];
    // for (auto &i : a) cin >> i;
    // for (int i = 0; i<n; ++i) {
    //     if (a[i]>0 && a[i] >= a[k-1]) ++c;
    // }
    // cout << c << '\n';


    // int n, a, b;
    // cin >> n >> a >> b;
    // string s;
    // cin >> s;
    // int x=0,y=0;
    // for (int i = 0 ; i < 100 ; ++i) {
    //     for (auto &i : s) {
    //         if (i=='N') ++y;
    //         else if (i=='S') --y;
    //         else if (i=='E') ++x;
    //         else if (i=='W') --x;

    //         if (x==a && y==b) {cout << "YES\n";return;}
    //     }
    // }
    // cout << "NO\n";

    // int n,m,c=0;
    // cin >> n >> m;
    // vector<vector<int>> a(n, vector<int>(m));
    // for (auto &i : a) for (auto &j : i) cin >> j;

    // char layer[5005];
    // for (int i = 0 ; (i+1)*2<=n && (i+1)*2<=m; ++i) {
    //     int pos = 0;
    //     for (int j = i; j<m-i; ++j) layer[pos++] = a[i][j];
    //     for (int j = i+1; j<n-i-1; ++j) layer[pos++] = a[j][m-i-1];
    //     for (int j = m-i-1; j>=i; --j) layer[pos++] = a[n-i-1][j];
    //     for (int j = n-i-2; j>=i+1; --j) layer[pos++] = a[j][i];

    //     for (int j = 0; j<pos; ++j) {
    //         if (layer[j] == '1' && layer[(j+1)%pos]=='5' && layer[(j+2)%pos]=='4' && layer[(j+3)%pos]=='3') ++c;
    //     }
    // }
    
    // cout << c << '\n';




    // i64 n, k;
    // cin >> n >> k;
    // vector<i64> l,u;
    // for (i64 i = 1 ; i*i<=n; ++i) {
    //     i64 j = n/i;
    //     if (j*i == n) {
    //         l.push_back(i);
    //         if (i!=j) u.push_back(j);
    //     }
    // }
    // while (!u.empty()) {
    //     l.push_back(u.back());
    //     u.pop_back();
    // }
    // cout << (l.size()>=k ? l[k-1] : -1) << '\n';


    // i64 n,k;
    // cin >> n >> k;
    // vector<i64> f;
    // for (i64 i = 2; i*i<=n; ++i) {
    //     while (n%i==0) {
    //         f.push_back(i);
    //         n/=i;
    //     }
    // }
    // if (n>1) f.push_back(n);
    // while (int(f.size()) > k) {
    //     i64 buf = f.back();
    //     f.pop_back();
    //     f.back() *= buf;
    // }

    // if (int(f.size()) < k) cout << "-1";
    // else for (auto i : f) cout << i << ' ';
    // cout << '\n';

    // int n, e=0,o=0;
    // cin >> n;
    // int a[n];
    // for (auto &i : a) {
    //     cin >> i;
    //     if (i&1) ++o;
    //     else ++e;
    // }
    // cout << ((e>o || o%2==0) && n%2==0 ? "Yes\n" : "No\n");

    // int n,k,a,m,t;
    // cin >> n >> k >> a >> m >> t;
    // (n-1)*m + a <= t ? "Yes\n" : "No\n";
    // int n,a,b;
    // cin >> n >> a >> b;
    // cout << (n%a==0 ? "YES\n" : "NO\n");

    // int n, k, c=0;
    // cin >> n >> k;
    // int a[n];
    // for (auto &i : a) cin >> i;
    // for (int i = 1; i < n; ++i) {
    //     int t = (a[i]>a[i-1] ? 0 : ((a[i-1]-a[i])/k)+1);
    //     c+=t;
    //     a[i]+=t*k;
    // }
    // cout << c << '\n';




    // int n;
    // cin >> n;
    // for (int i = 1 ; i <= n; ++i) {
    //     cout << 2*i-1 << ' ';
    // }
    // cout << '\n';


    // vector<int> a = {1,5,2,73,45,13};
    // nth_element(a.begin(), a.begin(), a.end());
    // for (auto i : a ) cout << i<< ' ';

    // int p,q,v,m;
    // cin >> p >> q >> v >> m;
    // if (p > v) {
    //     swap(p, v);
    //     swap(q,m);
    // }
l
    // int intersect = max(min(rights.first, rights.second) - max(lefts.first, efts.second) + 1, 0);
    // cout << 2*(p+v+1) - intersect << '\n';
    
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int T=1; cin>>T; while (T--)
    solve();
}