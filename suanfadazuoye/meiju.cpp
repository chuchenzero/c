#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

void generateP(vector<int> &P, vector<bool> &isLegal, int n, int &ans, int index) {
    if(index == n + 1) {
        ans++;
        return;
    }
    //i表示列
    for (int i = 1; i <= n; i++) {
        if(!isLegal[i]) {
            //验证该列的合法性
            bool flag = true;
            for (int pre = 1; pre < index; pre++) {
                if(abs(index - pre) == abs(i - P[pre])) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                //该列合法
                P[index] = i;
                isLegal[i] = true;
                generateP(P, isLegal, n, ans, index + 1);
                isLegal[i] = false;
            }
        }
    }
}

int main() {
    int n = 8;
    vector<int> p(n + 1);
    vector<bool> isLegal(n + 1);
    int ans = 0;
    generateP(p, isLegal, n, ans, 1);
    printf("有%d种放置可能\n", ans);
    return 0;
}
