#include <cstdio>
#include <cstring>
 
using namespace std;
typedef long long ll;
 
ll a[11], sum, mark;
 
void test(ll row, ll ld, ll rd)
{
    if(row != mark) //当所有行都有皇后时说明摆放完毕
    {
        ll pos = mark & ~(row | ld | rd); 
        while(pos) //如果pos中还有可以摆放的位置
        {
            ll p = pos & -pos; //p为pos中最末一个可以摆放的位置
            pos -= p; //将p从可摆放位置去掉
            test(row + p, (ld + p) << 1, (rd + p) >> 1); //对下一列进行判断
        }
    }
    else
        sum++;
}
 
int main()
{
    int n=8;
        sum = 0, mark = 1;
        if(a[n] == 0)
        {
            mark = (mark << n) - 1; //有多少个皇后，就有多少bit被置1。
            test(0, 0, 0);
            a[n] = sum;
        }
        printf("共有%lld种解法\n", a[n]);
}
 