#include<bits/stdc++.h>
using namespace std;

int n, m;
int u, v;
vector <int> e[100];
stack <int> s;
int cx[100];
void dfs(int x){
    while(!s.empty()) s.pop();
    s.push(x);
    cx[x] = 1;
    while(!s.empty()){
        int u=s.top();
        s.pop();
        cout << u << ' ';
         for(int v: e[u])
            if(cx[v] == 0){
                cx[v]=1;
                s.push(v);
            }

    }
}
int main(){
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    dfs(1);
}
