#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

string s1, s2;
long long ans;

int main()
{
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 1; j < s2.size(); j++)
        {
            if (s1[i] == s2[j]) {
                if (s1[i + 1] == s2[j - 1])
                    ans++;
            } 
        }
    }
    cout << pow(2, ans);
}