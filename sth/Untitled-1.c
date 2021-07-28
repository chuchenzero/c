#include <cstdio>
#include <set>
#include <vector>
using namespace std;
//回溯法

void Print(int N, vector<int> placeResult, int ans) {
    printf("第%d种放置方案：\n", ans);
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(j == placeResult[i]) printf("√");
            else printf("×");
            if(j != N) printf(" ");
            else printf("\n");
        }
    }
    printf("\n");
}

int Erase(int &i, set<int> &col, set<int> &diag45, set<int> &diag135, vector<int> &placeResult) {
    i--;
    int k = placeResult[i];  //上一行皇后所在的列；
    placeResult[i] = 0;
    col.erase(k);
    diag45.erase(i + k);
    diag135.erase(i - k);
    return k + 1; //试探下一列；
}

void Backtracking(int N, int i, set<int> &col, set<int> &diag45, set<int> &diag135, vector<int> &placeResult, int &ans) {
    //回溯过程；
    int j = 1; //第1列；
    int startL = i;     
    while(i <= N && i >= startL) {
        while(j <= N) {
            //判断是否不同列，不在同一45°对角线，不在同一135°对角线
            if ((!col.count(j)) && (!diag45.count(i + j)) && (!diag135.count(i - j))){
               //可放置皇后
               placeResult[i] = j;
               col.insert(j);
               diag45.insert(i + j);
               diag135.insert(i - j);

               //处理下一行
               i++;
               j = 1;
               break;
            }
            j++;
        }

        if(j > N) {
            //处理上一行
            j = Erase(i, col, diag45, diag135, placeResult);
        }

        //传统的N皇后问题，输出合法放置的方案个数以及每种方案详情
        if(i == N + 1) {
            //合法放置
            ans++;
            Print(N, placeResult, ans);
            j = Erase(i, col, diag45, diag135, placeResult);
        }
    }
}

int main() {
    //测试回溯法
    int N = 8, ans = 0;
    vector<int> placeResult(N + 1);
    set<int> col, diag45, diag135;
    col.clear(); diag45.clear(); diag135.clear();

    Backtracking(N, 1, col, diag45, diag135, placeResult, ans);
    printf("有%d种放置可能", ans);
    return 0;
}

