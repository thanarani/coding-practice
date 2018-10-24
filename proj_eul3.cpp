#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	lli num = 600851475143;
	lli n = sqrt(num), i, ans = 1;

	for(i = 3; i <= n; i+=2) {
		while(num%i == 0) {
			ans = i;
			num = num/i;
		}
	}
	cout<<ans<<"\n";
	return 0;
}