#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int f[15], s[15];
int n, minans = INT_MAX; // 将最小答案初始化为int_max
int m;                   // （调试）m层

void dfs(int id, int sum_f, int sum_s) // 深度优先搜索(层数，肥肉重量总和，瘦肉重量总和)
{
    cout << id << ' ' << sum_f << ' ' << sum_s << endl; // 调试数据，输出id, sum_f, sum_s
    if (id == m)
    {
        cout << "ovo" << endl; // 到m层输出ovo
    }
    if (abs(sum_f - sum_s) <= minans && sum_f + sum_s) // 算肥肉瘦肉之差
    {
        minans = abs(sum_f - sum_s);
    }
    if (id > n) // 回溯条件，层数大于块数
    {
        return;
    }
    dfs(id + 1, sum_f, sum_s); // 递归
    dfs(id + 1, sum_f + f[id], sum_s + s[id]);
}

int main()
{
    cin >> n >> m;               // 输入块数和调试层数
    for (int i = 1; i <= n; i++) // 循环输入每块的肥瘦肉信息
    {
        cin >> f[i] >> s[i];
    }
    dfs(1, 0, 0);   // 开始深搜
    cout << minans; // 输出最小结果
}