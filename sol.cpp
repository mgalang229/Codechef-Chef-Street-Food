#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int ans=0;
		for(int i=0; i<n; ++i) {
			int s, p, v;
			cin >> s >> p >> v;
			ans=max(ans, (p/(s+1))*v);
		}
		cout << ans << "\n";
	}
}
