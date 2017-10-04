#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.codechef.com/problems/CNOTE

	lli t,x, y, k, n, i;

	cin>>t;

	while(t--) {
		cin>>x>>y>>k>>n;
		lli reqd = x - y;
		int fl = 0;
		lli cost, pages;
		for(i=0; i<n; i++)  {
			cin>>pages>>cost;
			if(pages >= reqd && cost <= k)
				fl = 1;
		}

		if(fl)
			cout<<"LuckyChef\n";
		else
			cout<<"UnluckyChef\n";
	}


	return 0;
}