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

int rev(int a, int b)
{
    string m = to_string(a), n = to_string(b), res;
    reverse(m.begin(), m.end());
    reverse(n.begin(), n.end());
    int r = stoi(m) + stoi(n);
    res = to_string(r);
    reverse(res.begin(), res.end());
    return stoi(res);
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int M, N;
        scanf("%d%d", &M, &N);
        printf("%d\n", rev(M, N));
    }
    return 0;
}
