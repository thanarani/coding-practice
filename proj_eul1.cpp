#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// Find sum of multiples 3 or 5 below 1000
	int i, ans = 0;

	for(i = 3; i < 1000; i++) {
		if(i%3 == 0 || i%5 == 0)
			ans += i;
	}

	cout<<ans<<"\n";
	return 0;
}