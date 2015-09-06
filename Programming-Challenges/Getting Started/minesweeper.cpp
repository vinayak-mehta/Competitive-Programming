/* Author: vortex_ape */
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = (int)a; i < (int)b; ++i)
#define REP(i, n) FOR(i, 0, n)
#define CLR(x) x.clear()
#define SZ(x) ((int)(x).size())
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 1000000000
#define MOD 1000000007
#define ALL(x) x.begin(), x.end()
#define LET(x, a) __typeof(a) x(a)
#define IFOR(i, a, b) for(LET(i, a); i != (b); ++i)
#define EACH(it, v) IFOR(it, v.begin(), v.end())

typedef pair<int, int> PII;
typedef vector<PII> VPII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long LL;
typedef unsigned long long ULL;

LL mpow(LL a, LL n)
{LL ret=1;LL b=a;while(n) {if(n&1)
    ret=(ret*b)%MOD;b=(b*b)%MOD;n>>=1;}
return (LL)ret;}

int main()
{
    int n, m, c = 1, out_flag = 0;
    while(true)
    {
        scanf("%d%d", &n, &m);
        if(!n && !m) break;
        vector<string> field, ans;
        string f;
        int ar = 0;
        for(int i = 0; i < n; i++) cin >> f, field.PB(f);
        for(int i = 0; i < n; i++)
        {
            f = "";
            for(int j = 0; j < m; j++)
            {
                if(field[i][j] == '*') 
                {    
                    f += '*';
                    continue;
                }
                ar = 0;
                if(j - 1 >= 0 && field[i][j - 1] == '*') ar++;
                if(j + 1 < m && field[i][j + 1] == '*') ar++;
                if(i - 1 >= 0 && field[i - 1][j] == '*') ar++;
                if(i + 1 < n && field[i + 1][j] == '*') ar++;
                if(i - 1 >= 0 && j - 1 >= 0 && field[i - 1][j - 1] == '*') ar++;
                if(i - 1 >= 0 && j + 1 < m && field[i - 1][j + 1] == '*') ar++;
                if(i + 1 < n && j - 1 >= 0 && field[i + 1][j - 1] == '*') ar++;
                if(i + 1 < n && j + 1 < m && field[i + 1][j + 1] == '*') ar++;
                f += ar + '0';
            }
            ans.PB(f);
        }
        if(out_flag == 1)
            printf("\n");
        out_flag = 1;
        printf("Field #%d:\n", c++);
        for(int i = 0; i < n; i++) cout << ans[i] << "\n";
        field.clear();
        ans.clear();
    }
    return 0;
}
