#include <iostream>
using namespace std;

string s1, s2;

void f(string s1, string s2) {
    if (s1.size() <= 0 || s2.size() <= 0) {
        return;
    }
    char g = s2[s2.size() - 1];
    cout << g;
    int k = s1.find(g);
    f(s1.substr(0, k), s2.substr(0, k));
    f(s1.substr(k + 1), s2.substr(k, s2.size() - k - 1));
}

int main() {
    cin >> s1 >> s2;
    f(s1, s2);
}