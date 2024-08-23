#include<bits/stdc++.h>
using namespace std;

class Graph{
   public: 
        int n, a[1000][1000];
        bool used[1000];
    public:
        void Init(){
            cin >> n;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++) cin >> a[i][j];
            }
            memset(used, false, sizeof(used));
        }
        void Recursive_DFS(int u){
            cout << u << " ";
            used[u] = true;
            for(int i = 1; i <= n; i++){
                if(!used[i] && a[u][i] == 1){
                    Recursive_DFS(i);
                }
            }
        }
};

int main(){
    Graph gp;
    gp.Init();
    gp.Recursive_DFS(1);
    return 0;
}
