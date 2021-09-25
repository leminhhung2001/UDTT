#include<bits/stdc++.h>

using namespace std;
vector <int> a[100];
int dd[100], n, m, v, u;

void DFS(int x){
    dd[x] = 1;
    cout << x << ' ';
    for(int i=0; i<a[x].size(); i++){
        int k = a[x][i];
        if(dd[k] == 0) DFS(k);
    }
}
int main(){
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
//    cout << a[u].size() << endl;
//    cout << a[v].size() << endl;
    DFS(1);
}
