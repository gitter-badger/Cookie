#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 1000 + 10;

int n, m;
char c[MAXN];
int d[MAXN];

int main()
{
    int g, s;
    bool flag = true;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%s", c);
        for (int j = 0; c[j]; ++j)
        {
            if (c[j] == 'G')
            {
                g = j;
            }
            else if (c[j] == 'S')
            {
                s = j;
            }
        }
        if (g > s)
        {
            flag = false;
            break;
        }
        d[i] = s - g;
    }
    if (flag)
    {
        sort(d + 1, d + 1 + n);
        int ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (d[i] != d[i - 1])
            {
                ++ans;
            }
        }
        printf("%d\n", ans);
    }
    else
    {
        puts("-1");
    }
    return 0;
}
