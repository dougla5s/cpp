#include <bits/stdc++.h>
#define ll long long
using namespace std;

class TreeNode {
public:
	map<int, vector<int>> adj;
	map<int, bool> visited;
	int count[sizeof(adj)];

	void addEdge(int x, int y) {
		adj[x].push_back(y);
	}

	void printTree() {
		for (const auto &[node, children] : adj) {
			cout << node << " -> ";
	        for (auto child : children) cout << child << " ";
	        cout << '\n';
		}
	}
	void DFS(int x, int y=0) {
		cout << x << endl;
		for (auto u : adj[x]) {
			if (u != y) DFS(u, x);
		}
	}
	void BFS(int x) {
		queue<int> q;
		visited[x] = true;
		q.push(x);
		while (!q.empty()) {
			int n = q.front(); q.pop();
			cout << n << ' ';

			for (int u : adj[n]) {
				visited[u] = true;
				q.push(u);
			}
		}
		cout << endl;
	}

	int CDFS(int x, int y) {
		count[x] = 1;
		for (auto u : adj[x]) {
			if (u == y) continue;
			CDFS(u, x);
			count[x] += count[u];
		}
		return count[x];
	}

	int getRoot() {
		int ans;
		for (int i = 0; i < adj.size();++i) {
			if (!adj[i].empty()) {
				for (auto u : adj[i]) if (u != i) ans = i;
			}
		}
	return ans;
	}

	int toLeaf(int node) {
	visited[node] = true;
        int maxDepth = 0;

        for (int child : adj[node]) {
            if (!visited[child]) {
                maxDepth = max(maxDepth, toLeaf(child) + 1);
            }
        }

        return maxDepth;
   	}
};



int main() {
	TreeNode tree;
	tree.addEdge(1, 2);
    tree.addEdge(1, 3);
    tree.addEdge(2, 4);
    tree.addEdge(2, 5);
    tree.addEdge(3, 6);
    tree.addEdge(3, 7);
	tree.printTree();
	cout << tree.getRoot() << endl;
	cout << tree.toLeaf(2);
}