#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/LECANDY

	int t, n;
	lli c, want;

	cin>>t;

	while(t--) {
		cin>>n>>c;
		for(int i=0; i<n; i++) {
			cin>>want;
			c-=want;
		}

		if(c >= 0 )
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}


	return 0;
}