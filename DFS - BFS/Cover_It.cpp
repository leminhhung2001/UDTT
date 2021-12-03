#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 +5;
int n, m;
int cx[maxn], dem, test;
void bfs(int x, int y){
    cx[x] = color;
    for(int y: ed[x])
        if(cx[y] == 0)
         dfs(y, 3 - color);

}
int main(){
    cin >> test;
    while(test){
        test--;
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            ed[i].clear();
            cx[i] = 0;
        }

    }
}

