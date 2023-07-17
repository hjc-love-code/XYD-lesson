#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

string s;
string first, second, answer;
int ans = INT_MAX;

void dfs(string num1, string num2, int time) {
    if (stoi(num1) * stoi(num2) == stoi(answer)) {
        ans = min(ans, time);
    }

}

int main() {
    cin >> s;
    for (int i = 0; i < 6; i++) {
        first = first + s[i];
    }
    for (int i = 7; i < 13; i++) {
        second = second + s[i];
    }
    for (int i = 14; i < 20; i++) {
        answer = answer + s[i];
    }
    dfs(first, second, 0);
}