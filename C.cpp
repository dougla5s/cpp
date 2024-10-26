#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	// int a,b;
	// cin >> a >> b;
	// int a1 = a%2==0 ? a : a+1;
	// int b1 = b%2==0 ? b : b-1;
	// int a2 = a&1 ? a : a+1;
	// int b2 = b&1 ? b : b-1;
	// int n = b-a+1;
	// int n1,n2;
	// if (a%2==0) {
	// 	n1 = (n+1)/2;
	// 	n2 = n/2;
	// } else {
	// 	n1 = n/2;
	// 	n2 = (n+1)/2;
	// }
	// cout << (((a1+b1) * n1)/2) - (((a2+b2) * n2)/2) << '\n';

	// int a, b;
	// cin >> a >> b;
	// if (a==b) cout << 0 << '\n';
	// else cout << 2 * (a-b+1) << '\n';

	// int a,b;
	// cin >> a >> b;
	// int a1 = a + a%2;
	// int b1 = b - b%2;
	// int even = ((b1+a1)/2) * ((b1-a1)/2 + 1);
	// a1 = a + (1-a%2);
	// b1 = b - (1-b%2);
	// int odd = ((b1+a1)/2) * ((b1-a1)/2 + 1);
	// cout << even-odd << '\n';

	//

	// string s;
	// cin>>s;
	// int mx =-1, sum=0;
	// for (auto &i : s) {
	// 	int num = (i >= 'A' ? i - 'A' + 10 : i-'0');
	// 	mx = max(mx, num);
	// 	sum += num;
	// }
	// if (mx==0) cout << 2 << '\n';
	// else {
	// 	string ans = "";
	// 	for (int i = mx; i<37; ++i) {
	// 		if (!(sum % i)) {
	// 			ans=i+1;
	// 			break;
	// 		}
	// 	}
	// 	cout << (ans.size() >= 1 ? ans : "No solution") << '\n';
	// }

	// int n;
	// cin >> n;
	// int comf = n%3; // кол
	// int econom = (n-4*comf)/3;
	// if (econom>=0)
	// 	cout << econom << ' ' << comf;
	// else cout << 0 << ' ' << 0 << '\n';

	// 
	int n,ans=0,mode=0;
	cin >> n;
	vector<int> a(n);
	for (auto &i : a) {
		cin >> i;
		if (i==1) {
			if (mode==2) mode=0;
			else if (mode==0) {mode = 1; ++ans;}
		}
		if (i==2) {
			if (mode!=2) {mode = 2; ++ans;}
		}
		if (i==3) {
			if (mode==1) {mode = 2; ++ans;}
			else if (mode==2) mode = 0;
			else ++ans;
		}
	}
	cout <<ans << '\n';

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// int t;
	// cin >> t;
	// while(t--)
	solve();
	return 0;
}