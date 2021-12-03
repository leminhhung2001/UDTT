#include<bits/stdc++.h>
using namespace std;

int n, m, k, dx, dy, dem3 = 0;
const int maxn = 1e3 + 3;
int nx[4] = {0, -1, 1, 0};
int ny[4] = {1, 0, 0, -1};

vector <vector<int>> a(maxn);
void bfs(int x, int y){
    queue <pair<int, int> > q;
    q.push(make_pair(x, y));
    while(!q.empty()){
        pair <int, int> p;
        p = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int kx = p.first + nx[i];
            int ky = p.second + ny[i];
            if(0 <= kx and kx < n and 0 <= ky and kx < m and a[kx][ky] == 3){
                q.push(make_pair(kx, ky));
                a[kx][ky] = 2;
               // cout << "a["<<kx<<"]["<<ky<<"] = " << a[kx][ky] << endl;
                dem3--;
                //cout << "DEM0: " << dem3 << endl;
                if(dem3 == k) return;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k;
    string s[maxn];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j] == '#'){
                a[i].push_back(1);
            }
            else{
                dem3++;
                a[i].push_back(3);
                dx = i;
                dy = j;
            }
        }
    }
    bfs(dx, dy);
//    for(int i=0; i<n; i++){
//       for(int j=0; j<m; j++){
//            cout << a[i][j] << " ";
//       }
//       cout << endl;
//    }
    for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
            if(a[i][j] == 3){
                s[i][j] = 'X';
            }
        }
    }
     for(int i=0; i<n; i++){
       cout << s[i] << endl;
    }
}

