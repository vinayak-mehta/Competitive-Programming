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
    int n, a[3001];
    bool flag;
    while(scanf("%d", &n) != EOF)
    {
        set<int> s;
        flag = false;
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int i = 0; i < n - 1; i++) s.insert(abs(a[i] - a[i + 1]));
        if(s.size() != n - 1)
        {
            printf("Not jolly\n");
            continue;
        }
        else
        {
            int i = 1;
            for(set<int>::iterator it = s.begin(); it != s.end(); ++it)
            {
                if(*it != i)
                {
                    flag = true; 
                    break;
                }
                i++;
            }
            if(flag) printf("Not jolly\n");
            else printf("Jolly\n");
        }
    }
    return 0;
}
