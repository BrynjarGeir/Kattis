#include <iostream>
using namespace std;

int main() {
    int N = 100, n;
    while(N-- && cin >> n && n != -1) {
        bool graph[n][n];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> graph[i][j];
            }
        }

        for(int i = 0; i < n; i++) {
            bool weak = true, already = false;
            for(int j = 0; j < n; j++) {
                for(int k = 0; k < n; k++) {
                    if(graph[i][j] && graph[j][k] && graph[k][i] && i != j && j != k && i != k) {
                        weak = false;
                        already = true;
                        break;
                    }
                }
                if(already) break;
            }
            if(weak) cout << i << " ";
        }
        cout << endl;
    }
}