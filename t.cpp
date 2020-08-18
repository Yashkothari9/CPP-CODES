#include <bits/stdc++.h>

using namespace std;

const int N = 200 * 1000 + 11;

int p[N];
int d[N];
vector<int> g[N];

void dfs(int v, int pr = -1, int dst = 0) {
	d[v] = dst;
	p[v] = pr;
	for (auto to : g[v]) {
		if (to != pr) {
			dfs(to, v, dst + 1);
		}
	}
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n - 1; ++i) {
		int x, y;
		scanf("%d %d", &x, &y);
		--x, --y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	dfs(0);
	set<pair<int, int>> st;
	for (int i = 0; i < n; ++i) {
		if (d[i] > 2) {
			st.insert(make_pair(-d[i], i));
		}
	}

	int ans = 0;
	while (!st.empty()) {
		int v = st.begin()->second;
		v = p[v];
		++ans;
		auto it = st.find(make_pair(-d[v], v));
		if (it != st.end()) {
			st.erase(it);
		}
		for (auto to : g[v]) {
			auto it = st.find(make_pair(-d[to], to));
			if (it != st.end()) {
				st.erase(it);
			}
		}
	}

	printf("%d\n", ans);
}
