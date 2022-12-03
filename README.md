# 函数
- 函数是一个实现一定功能语句的集合， 每个cpp程序都至少有一个函数，为main()函数

    > pow(a,b) 求a的b次方  
    > sqrt(a）开根号  
    > strlen(a) 返回字符a的长度  

- 代码重用，问题分解，减少重复代码，增强可读性

- 有参数，有返回；无参数，有返回；有参数，无返回；无参数，无返回。

- 形式参数又称形参，目的是用来接受调用该函数时传入的实际参数

- 时间参数又称实参，是在调用时传递给函数的参数，必须要有确定的值，以便把这些值传递给形参


# 高精度函数应用题，求余数
- 寻找规律，发现答案=原数比大小
- 思考各种可能性，不遗漏（长度，位数比较）
- 高精度算法模板，先不用函数，再改进使用函数
- 附：高精度加法模板

    ```c++
    #include<bits/stdc++.h>
    using namespace std;
    string s1, s2;
    int a[1005], b[1005], c[1005];
    int main() {
        cin >> s1 >> s2;
        for (int i=0; i<s1.size(); i++) {
            a[i] = s1[s1.size() - 1 -i] - '0';
        }
        for (int i=0; i<s2.size(); i++) {
            b[i] = s2[s2.size() - 1 -i] - '0';
        }
        int len = max(s1.size(),s2.size()) +1;
        for (int i=0; i<len; i++) {
                c[i] += a[i] + b[i];
                c[i+1] += c[i] / 10;
                c[i] %= 10;
        }
        while (c[len -1] == 0 && len -1 > 0) {
            len--;
        }
        for (int i=len-1; i>=0; i--) {
            cout<<c[i];
        }
        return 0;
    }
    ```
- 附：高精度乘法模板

    ```c++
    #include<bits/stdc++.h>
    using namespace std;
    string s1,s2;
    int a[1005], b[1005], c[2000];
    int main() {
        cin >> s1 >> s2;
        for (int i=0; i<s1.size(); i++) {
            a[i] = s1[s1.size() - 1 -i] - '0';
        }
        for (int i=0; i<s2.size(); i++) {
            b[i] = s2[s2.size() - 1 -i] - '0';
        }
        int len = s1.size() + s2.size();
        for (int i=0; i<s1.size();i++) {
            for (int j=0; j<s2.size();j++) {
                c[i+j] += a[i] * b[j];
            }
        }
        for (int i=0;i<len;i++) {
            c[i+1] += c[i] / 10;
            c[i] %= 10;
        }
        while (c[len -1] == 0 && len -1 > 0) {
            len--;
        }
        // 去前导零
        for (int i=len-1; i>=0; i--) {
            cout<<c[i];
        }
        return 0;
    }
    ```
# 结构体(struct)
```c++
    struct type_name() {
        string xxx; //类型+成员
        int xxx;    //类型+成员
        char xxx;   //类型+成员
        double xxx; //类型+成员
    }; //分数不能少
```




 

