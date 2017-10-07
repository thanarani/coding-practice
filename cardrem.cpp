#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.hackerrank.com/contests/visa-codeurway-2017/challenges/card-removal

	lli n;

	cin>>n;
	lli cnt = 0;
	while(!(n%2) && n) {
		cnt++;
		n = n/2;
	}
	cout<<cnt<<"\n";

	return 0;
}