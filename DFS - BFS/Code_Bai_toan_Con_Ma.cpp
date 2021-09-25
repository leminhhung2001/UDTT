#include<bits/stdc++.h>
using namespace std;

int n, m, ax, ay, bx, by;
int nx[8]={-2, -2, -1, -1, 1, 1, 2, 2};
int ny[8]={-1, 1, -2, 2, -2, 2, -1, 1};
const int maxn = 1e3 + 5;
int number[maxn][maxn];

void BFS(int x, int y){
    number[x][y] = 1;
    queue <pair<int, int> > q;
    q.push(make_pair(x, y));
    while(!q.empty()){
        queue <int, int> p;
        p = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            int kx = p.first + nx[i];
            int ky = p.second + ny[i];
            if(1 <= kx and kx <= n and 1 <= ky and ky <= m and number[kx][ky] == 0){
                q.push(make_pair(kx, ky));
                number[kx][ky] = number[p.first][p.second] + 1;
            }
        }
    }
}
int main(){
    cin >> n >> m >> ax >> ay >> bx >> by;
    BFS(ax, ay);
    cout << number[bx][by] - 1;

}

