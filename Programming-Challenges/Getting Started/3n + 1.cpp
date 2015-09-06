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
#define INF 1000000
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

LL mem[1000000];

LL foo(LL n)
{
    if(n < INF)
    {
        if(mem[n]) return mem[n];
        if(n & 1) return mem[n] = foo((3 * n + 1) >> 1) + 2;
        else return mem[n] = foo(n >> 1) + 1;
    }
    if(n & 1) return foo((3 * n + 1) >> 1) + 2;
    else return foo(n >> 1) + 1;
}

int main()
{
    LL i, j, i_out, j_out, mx;
    mem[1] = 1;
    while(scanf("%lld", &i) != EOF)
    {
            scanf("%lld", &j);
        i_out = i;
        j_out = j;
        i = min(i_out, j_out);
        j = max(i_out, j_out);
        mx = 0;
        while(i <= j)
        {
            mx = max(mx, foo(i));
            i++;
        }
        printf("%lld %lld %lld\n", i_out, j_out, mx);
    }
    return 0;
}
