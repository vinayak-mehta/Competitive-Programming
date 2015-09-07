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
    char str[10];
    char lookup[10][7] = {
        '-','|','|',' ','|','|','-',      
        ' ','|',' ',' ','|',' ',' ',
        '-','|',' ','-',' ','|','-',
        '-','|',' ','-','|',' ','-',
        ' ','|','|','-','|',' ',' ',
        '-',' ','|','-','|',' ','-',
        '-',' ','|','-','|','|','-',
        '-','|',' ',' ','|',' ',' ',
        '-','|','|','-','|','|','-',
        '-','|','|','-','|',' ','-',
    };
    int s;
    while(scanf("%d%s", &s, &str) && s)
    {
        int n = strlen(str);
        int digit;

        for(int i = 0; i < 2 * s + 3; i++)
        {
            for(int j = 0; j < n; j++)
            {
                digit = str[j] - '0';
                if((i % (s + 1)) == 0)
                {
                    printf(" ");
                    for(int k = 0; k < s; k++) printf("%c", lookup[digit][(i / (s + 1)) * 3]);
                    printf(" ");
                }
                if(i > 0 && i < (s + 1))
                {
                    printf("%c", lookup[digit][2]);
                    for(int k = 0; k < s; k++) printf(" ");
                    printf("%c", lookup[digit][1]);
                }
                if(i > (s + 1) && i < (2 * s + 2))
                {
                    printf("%c", lookup[digit][5]);
                    for(int k = 0; k < s; k++) printf(" ");
                    printf("%c", lookup[digit][4]);
                }
                if(j != n - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
