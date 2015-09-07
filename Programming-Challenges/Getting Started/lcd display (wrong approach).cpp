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

char digit[24][13];

void make_0(int s)
{
    for(int i = 1; i < s + 1; i++) //4
        digit[(2 * s + 3) / 2][i] = ' ';
}

void make_1(int s)
{
    for(int i = 1; i < (2 * s + 3) / 2; i++) //1
        digit[i][0] = ' ';
    for(int i = 1; i < s + 1; i++) //2
        digit[0][i] = ' ';
    for(int i = 1; i < s + 1; i++) //4
        digit[(2 * s + 3) / 2][i] = ' ';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //5
        digit[i][0] = ' ';
    for(int i = 1; i < s + 1; i++) //7
        digit[2 * s + 2][i] = ' ';
}

void make_2(int s)
{
    for(int i = 1; i < (2 * s + 3) / 2; i++) //1
        digit[i][0] = ' ';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //6
        digit[i][s + 1] = ' ';
}

void make_3(int s)
{
    for(int i = 1; i < (2 * s + 3) / 2; i++) //1
        digit[i][0] = ' ';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //5
        digit[i][0] = ' ';
}

void make_4(int s)
{
    for(int i = 1; i < s + 1; i++) //2
        digit[0][i] = ' ';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //5
        digit[i][0] = ' ';
    for(int i = 1; i < s + 1; i++) //7
        digit[2 * s + 2][i] = ' ';
}

void make_5(int s)
{
    for(int i = 1; i < (2 * s + 3) / 2; i++) //3
        digit[i][s + 1] = ' ';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //5
        digit[i][0] = ' ';
}

void make_6(int s)
{
    for(int i = 1; i < (2 * s + 3) / 2; i++) //3
        digit[i][s + 1] = ' ';
}

void make_7(int s)
{
    for(int i = 1; i < (2 * s + 3) / 2; i++) //1
        digit[i][0] = ' ';
    for(int i = 1; i < s + 1; i++) //4
        digit[(2 * s + 3) / 2][i] = ' ';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //5
        digit[i][0] = ' ';
    for(int i = 1; i < s + 1; i++) //7
        digit[2 * s + 2][i] = ' ';
}

void make_8(int s)
{
    for(int i = 1; i < (2 * s + 3) / 2; i++) //1
        digit[i][0] = '|';
    for(int i = 1; i < s + 1; i++) //2
        digit[0][i] = '-';
    for(int i = 1; i < (2 * s + 3) / 2; i++) //3
        digit[i][s + 1] = '|';
    for(int i = 1; i < s + 1; i++) //4
        digit[(2 * s + 3) / 2][i] = '-';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //5
        digit[i][0] = '|';
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //6
        digit[i][s + 1] = '|';
    for(int i = 1; i < s + 1; i++) //7
        digit[2 * s + 2][i] = '-';
}

void make_9(int s)
{
    for(int i = (2 * s + 3) / 2 + 1; i < 2 * s + 2; i++) //5
        digit[i][0] = ' ';
}

void make_space(int s)
{
    for(int i = 0; i < 2 * s + 3; i++)
        for(int j = 0; j < s + 2; j++)
            digit[i][j] = ' ';
}

void display(int s)
{
    for(int i = 0; i < 2 * s + 3; i++)
    {
        for(int j = 0; j < s + 2; j++)
            printf("%c", digit[i][j]);
        printf("\n");
    }
}

int main()
{
    int s, n;
    while(true)
    {
        scanf("%d%d", &s, &n);
        if(!s && !n) break;
        string num = to_string(n);
        for(int i = 0; i < num.length(); i++)
        {
            make_space(s);
            switch(num[i] - '0')
            {
                case 0: make_8(s);
                        make_0(s);
                        display(s);
                        break;
                case 1: make_8(s);
                        make_1(s);
                        display(s);
                        break;
                case 2: make_8(s);
                        make_2(s);
                        display(s);
                        break;
                case 3: make_8(s);
                        make_3(s);
                        display(s);
                        break;
                case 4: make_8(s);
                        make_4(s);
                        display(s);
                        break;
                case 5: make_8(s);
                        make_5(s);
                        display(s);
                        break;
                case 6: make_8(s);
                        make_6(s);
                        display(s);
                        break;
                case 7: make_8(s);
                        make_7(s);
                        display(s);
                        break;
                case 8: make_8(s);
                        display(s);
                        break;
                case 9: make_8(s);
                        make_9(s);
                        display(s);
                        break;
            }
        }        
    }
    return 0;
}
