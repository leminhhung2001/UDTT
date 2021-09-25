#include<bits/stdc++.h>
using namespace std;

int n, m, u, v, dd[100];
vector <int> k;

int main(){
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        k[u].push_back(v);
        k[v].push_back(u);
    }
}

