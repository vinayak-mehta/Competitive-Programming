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
    int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23}, a[101];
    int k = 20, i = 0, check = true, limit = sqrt(k);
    LL N = 1;
    while(p[i] <= k)
    {
        a[i] = 1;
        if(check)
        {
            if(p[i] <= limit)
                a[i] = floor(log(k)/log(p[i]));
            else check = false;
        }
        N *= pow(p[i], a[i]);
        i++;
    }
    cout << N << "\n";
    return 0;
}
