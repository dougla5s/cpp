#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
	return (n<=1) ? 1 : fact(n-1) * n; 
}
double expected(double probability) {
	double ans=0;
	for (int i = 1; i<=1.0/probability;++i) ans+=(probability*i);
	return ans;
}

int main() {
	return 0;
}