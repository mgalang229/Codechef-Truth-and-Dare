#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	int t1;
	cin >> t1;
	int tr[t1];
	for(int i=0; i<t1; ++i)
		cin >> tr[i];
	int d1;
	cin >> d1;
	int dr[d1];
	for(int i=0; i<d1; ++i)
		cin >> dr[i];
	int t2;
	cin >> t2;
	int ts[t2];
	for(int i=0; i<t2; ++i)
		cin >> ts[i];
	int d2;
	cin >> d2;
	int ds[d2];
	for(int i=0; i<d2; ++i)
		cin >> ds[i];
	int cnt=0;
	for(int i=0; i<t2; ++i)
		for(int j=0; j<t1; ++j)
			if(ts[i]==tr[j]) {
				cnt++;
				break;
			}
	for(int i=0; i<d2; ++i)
		for(int j=0; j<d1; ++j)
			if(ds[i]==dr[j]) {
				cnt++;
				break;
			}
	cout << (cnt==t2+d2?"yes":"no") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
