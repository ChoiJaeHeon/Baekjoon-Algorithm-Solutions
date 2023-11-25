#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int depth, int cnt) {
    if (cnt == m) {
        for (int i = 0; i < cnt; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    else {
        for (int i = depth; i <= n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                arr[cnt] = i;
                dfs(i + 1, cnt + 1);
                visited[i] = false;
            }
        }
    }
}

int main() {

    cin >> n >> m;
    dfs(1, 0);
    return 0;
}