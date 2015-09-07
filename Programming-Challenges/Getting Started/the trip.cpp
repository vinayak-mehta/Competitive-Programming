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
    int n;
    while(true)
    {
        scanf("%d", &n);
        if(!n) break;
        double a[n], sum = 0.0, pos = 0.0, neg = 0.0, mean, ans;
        for(int i = 0; i < n; i++) scanf("%lf", &a[i]), sum += a[i];
        mean = sum / n;
        for(int i = 0; i < n; i++) 
        {
            if(a[i] > mean)
                pos += (double) (long) ((a[i] - mean) * 100.0) / 100.0;
            else if(a[i] < mean)
                neg += (double) (long) ((mean - a[i]) * 100.0) / 100.0;
        }
        ans = max<double>(pos, neg);
        printf("$%.2lf\n", ans);
    }
    return 0;
}
