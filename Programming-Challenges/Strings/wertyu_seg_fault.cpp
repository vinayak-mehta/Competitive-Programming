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
    vector< vector<char> > keyboard { {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='},
                                      {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\'},
                                      {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\''},
                                      {'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'} };
    string s;
    vector<char>::iterator it;
    while(getline(cin, s))
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ') printf(" ");
            else if(s[i] == '\n') printf("\n");
            else
            {
                for(int j = 0; j < keyboard.size(); j++)
                {
                    if((it = find(keyboard[j].begin(), keyboard[j].end(), s[i])) != keyboard[j].end())
                        cout << keyboard[j][it - keyboard[i].begin() - 2];
                }
            }
        }
    }
    return 0;
}
