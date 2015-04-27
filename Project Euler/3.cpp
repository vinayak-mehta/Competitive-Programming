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

int isP(int n)
{
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int prime[10005];
void foo()
{
    int j = 0;
    for(int i = 2; i < 10005; i++)
    {
        if(isP(i))
            prime[j] = i, j++;
    }
}

int main()
{
    foo();
    int maxp = 0;
    LL n = 600851475143;
    for(int i = 0; i < 1005; i++)
        if(n % prime[i] == 0 && prime[i] > 0)
            maxp = prime[i];
    cout << maxp << "\n";
    return 0;
}
