#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	// https://www.hackerrank.com/contests/visa-codeurway-2017/challenges/visa-and-string-encryption

	int t, n, k;
	string s;

	cin>>t;

	while(t--) {
		cin>>s>>k;
		n = s.length();

		int i, vow = 0, cons = 0;
		for(i=0; i<k; i++)  {
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
				vow ++;
			else
				cons++;
		}

		cout<<vow*cons;

		for(i=1; i<= n-k; i++) {
			if(s[i-1] == 'a' || s[i-1] == 'e' || s[i-1] == 'i' || s[i-1] == 'o' || s[i-1] == 'u')
				vow--;
			else
				cons--;
			if(s[i+k-1] == 'a' || s[i+k-1] == 'e' || s[i+k-1] == 'i' || s[i+k-1] == 'o' || s[i+k-1] == 'u')
				vow++;
			else
				cons++;

			cout<<vow*cons;
		}

		cout<<"\n";
	}


	return 0;
}