#include <bits/stdc++.h>
using namespace std;
template<typename T> inline isz(T _x) {return int((_x).size());};

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

    i64 n;
    cin >> n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T=1;
    cin>>T;
    while (T--)
    solve();
    return 0;
}