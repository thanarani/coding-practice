#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MIL 4000000

int main() {
	lli first = 1, second = 1, ans = 0, x;

	while(first <= MIL && second <= MIL) {
		ans += (first + second);
		x = first;
		first = x + 2*second;
		second = 2*x + 3*second;
	}

	cout<<ans<<"\n";
	return 0;
}