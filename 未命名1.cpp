#include <cstdio>
#include <set>
#include <vector>
using namespace std;
//���ݷ�

void Print(int N, vector<int> placeResult, int ans) {
    printf("��%d�ַ��÷�����\n", ans);
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(j == placeResult[i]) printf("��");
            else printf("��");
            if(j != N) printf(" ");
            else printf("\n");
        }
    }
    printf("\n");
}

int Erase(int &i, set<int> &col, set<int> &diag45, set<int> &diag135, vector<int> &placeResult) {
    i--;
    int k = placeResult[i];  //��һ�лʺ����ڵ��У�
    placeResult[i] = 0;
    col.erase(k);
    diag45.erase(i + k);
    diag135.erase(i - k);
    return k + 1; //��̽��һ�У�
}

void Backtracking(int N, int i, set<int> &col, set<int> &diag45, set<int> &diag135, vector<int> &placeResult, int &ans) {
    //���ݹ��̣�
    int j = 1; //��1�У�
    int startL = i;     
    while(i <= N && i >= startL) {
        while(j <= N) {
            //�ж��Ƿ�ͬ�У�����ͬһ45��Խ��ߣ�����ͬһ135��Խ���
            if ((!col.count(j)) && (!diag45.count(i + j)) && (!diag135.count(i - j))){
               //�ɷ��ûʺ�
               placeResult[i] = j;
               col.insert(j);
               diag45.insert(i + j);
               diag135.insert(i - j);

               //������һ��
               i++;
               j = 1;
               break;
            }
            j++;
        }

        if(j > N) {
            //������һ��
            j = Erase(i, col, diag45, diag135, placeResult);
        }

        //��ͳ��N�ʺ����⣬����Ϸ����õķ��������Լ�ÿ�ַ�������
        if(i == N + 1) {
            //�Ϸ�����
            ans++;
            Print(N, placeResult, ans);
            j = Erase(i, col, diag45, diag135, placeResult);
        }
    }
}

int main() {
    //���Ի��ݷ�
    int N = 8, ans = 0;
    vector<int> placeResult(N + 1);
    set<int> col, diag45, diag135;
    col.clear(); diag45.clear(); diag135.clear();

    Backtracking(N, 1, col, diag45, diag135, placeResult, ans);
    printf("��%d�ַ��ÿ���", ans);
    return 0;
}

