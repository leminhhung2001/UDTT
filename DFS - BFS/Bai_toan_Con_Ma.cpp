#include<bits/stdc++.h>
using namespace std;

int nx[8]={-2, -2, -1, -1, 1, 1, 2, 2};
int ny[8]={-1, 1, -2, 2, -2, 2, -1, 1};
const int maxn = 1e3 +5;
int n, m,  bx,  by,  ex,  ey;
int num[maxn][maxn];
void bfs(int x, int y){
    num[x][y] = 1;
    queue <pair <int, int> > q;
    q.push(make_pair(x, y));
    while(!q.empty()){
        pair <int, int> p;
        p = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            if(1 <= p.first + nx[i] and p.first + nx[i] <= n
               and 1 <= p.second + ny[i] and p.second + ny[i] <= m
               and num[p.first + nx[i]][p.second + ny[i]] == 0)
               {
                q.push(make_pair(p.first + nx[i], p.second + ny[i]));
                num[p.first + nx[i]][p.second + ny[i]] = num[p.first][p.second] + 1;
               }
        }

    }

}
int main(){
    cin >> n >> m >> bx >> by >> ex >> ey;
    bfs(bx, by);
    cout << num[ex][ey] - 1;
}
