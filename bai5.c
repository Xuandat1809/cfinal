#include <iostream>
#include <vector>

using namespace std;

int n, u, v;
int sl[100005];
vector <int> a[100005];
int f[100005];

void lui(int u, int p){
    int dem = 0;
    for (auto v : a[u]) if (v != p) dem += 1;
    for (auto v : a[u]){
        if (v != p){
            lui(v, u);
            sl[u] += sl[v] + 1;
            f[u] += f[v];
            f[u] %= 10000;
            if (sl[v] > 0){
                f[u] += 1;
            }
            if (dem > 1) f[u] += 1;
            f[u] %= 10000;
        }
    }
}

int main() {
	cin>>n;
    for (int i=0; i<n-1; i++){
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    lui(1, 0);
    cout<<f[1];

  	return 0;
}
