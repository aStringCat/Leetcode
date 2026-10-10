// 切换题目：只引入一个题目文件，并修改下面的测试数据和方法调用。
#include "solution/06-matrix/48.cpp"

int main() {
    Solution solution;
    int n = 3;
    vector<vector<int>> a(n, vector<int>(n));

    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = num++;
        }
    }

    solution.rotate(a);
    return 0;
}
