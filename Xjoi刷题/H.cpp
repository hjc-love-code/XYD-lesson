#include <bits/stdc++.h>
using namespace std; 
int T, M, a[609];  
int main()
{                                           // 主函数开始
    cin >> T >> M;                          // 输入T,M的值
    for (int t, p; cin >> t >> p;)          // for循环
        for (int j = T; j >= t; j--)        // 倒推, 使同种蔬菜仅能用 1次
            a[j] = max(a[j], a[j - t] + p); // 将a的j号元素赋值为max(a[j],a[j-t]+p)
    cout << a[T];                           // 输出a的T号元素的值
    return 0;                               // 主函数结束，返回0
}