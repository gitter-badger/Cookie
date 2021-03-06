#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000 + 10;

int t, n, k;
int a[MAXN], b[MAXN];

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &k);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; ++i) {
            scanf("%d", &b[i]);
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] + b[i] < k) {
                flag = false;
                break;
            }
        }
        puts(flag ? "YES" : "NO");
    }
    return 0;
}
