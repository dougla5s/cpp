#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
// ll fact(int n) {
//     vector<ull> dp(n+1);
//     dp[0]= 1;
//     for (int i = 1; i <= n; ++i) {
//         dp[i] = dp[i-1] * i;
//     }
//     return dp[n];
// }

//5 
// 6 9 3 1 2
// void mySort(vi &arr) { // insertion sort
//     for (int i = 1; i < arr.size(); ++i) { // starting from 2-nd element in array
//         for (int j = i; j > 0 && arr[j-1] > arr[j]; --j) { 
//             arr[j-1] ^= arr[j] ^= arr[j-1] ^= arr[j]; // xor-swap
//     }
// }

void solve() {
    // A

    // int n;
    // cin >> n; 
    // vector<int> a(n);
    // iota(a.begin(), a.end(), 1); // заполняем массив участников их порядковым номером - [1, n]
    // while(a.size() > 1) { // пока a > 1 (то есть больше или равно 2)
    //     vector<int> next; // массив участников тура
    //     for (int i = 0; i<a.size(); i+=2) { // берем попарно двух участников
    //         int x; // вводим кто победил
    //         cin >> x;
    //         if (x&1) next.push_back(a[i]); // если цифра 1, то победил игрок с меньшим числом
    //         else next.push_back(a[i+1]); // если 2, то победил игрок с большим числом
    //     }
    //     a=next; // обновляем наш первый массив и идём на следующий тур
    // }
    // cout << a[0] << '\n'; // выводим последнего оставшегося участника

    // B

    /*
    for (int t = 0; t < 3; ++t) { // 3 номера
        string s; // ввод данных
        cin >> s;
        for (int i = 0 ; i<s.size(); ++i) { // смотрим каждую букву номера
            if (isalpha(s[i])) s[i] = 'A'; // если символ является буквой, то заменим её на букву А
            else if (isdigit(s[i])) s[i] = '0'; // если символ является цифрой, то заменим её на цифру 0
        }
        // т.к. строка теперь состоит из одних букв А и цифр 0, сравниваем с подгтовленным
        // шаблонами, если не равен ни одному из шаблонов выводим 0
        if (s == "A000AA") cout << 1;
        else if (s=="AA000") cout << 2;
        else if (s=="AA0000") cout << 3;
        else if (s=="0000AA") cout << 4;
        else cout << 0;
        cout << '\n';
    }
    */

    // C (моё решение)
    /*
    string s;
    cin>>s;
    string c = "";
    int x=0,y=0;
    for (char i : s) {
        if (isdigit(i)) {
            c.push_back(i);
        } 
        else if (isalpha(i)) {
            int num = stoi(c);
            if (i == 'N') y+=num;
            if (i=='S') y-=num;
            if (i=='E') x+=num;
            if (i=='W') x-=num;
            c="";
        }
    }

    if (y > 0) {
        cout << y << 'N';
        if (x > 0) {
            cout << x << 'E';
        }
        else if (x < 0) cout << abs(x) << 'W';
    }
    else if (y<0) {
        cout << abs(y) << 'S';
        if (x>0) {
            cout << x << 'E';
        }
        else if (x<0) cout << abs(x) << 'W';
    }
    cout << '\n'; */

    // C (правильное решение (полное)

    string s;
    cin >> s;
    int x=0,y=0;
    int num=0;

    for (auto i : s) {
        if (i == 'N'){
            y+=num;
            num = 0;
        }
        else if (i == 'S') {
            y-=num;
            num = 0;
        }
        else if (i == 'E') {
            x+=num;
            num = 0;
        }
        else if (i == 'W') {
            x-=num;
            num = 0;
        }
        else {
            num = num * 10 + (int)(i-48);
        }
    }

    if (y > 0) cout << y << 'N';
    if (y < 0) cout << abs(y) << 'S';
    if (x > 0) cout << x << 'E';
    if (x < 0) cout << abs(x) << 'W';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    solve();
    return 0;
}

// auto mex = [&](vector<int> arr) -> int {
    //     unordered_set<int> d;
    //     int mex = 0;
    //     for (auto i : arr) if (i>=0) {d.insert(i);}

    //     while (d.find(mex) != d.end()) ++mex;
    //     return mex;
    // };

// int h, m; char c;
    // cin >> h >> c >> m;
    // string am = (h < 12 ? " AM" : " PM");
    // h = (h % 12 ? h % 12 : 12);
    // cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << am << '\n';
    