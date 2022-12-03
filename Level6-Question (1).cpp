#include<bits/stdc++.h>
using namespace std;

struct node
{
    int num;
    int score;
}nd[100005];
int n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nd[i].num;
        for (int j = 0; j < nd[i].num; j++) {
            int score;
            cin >> score;
            nd[i].score += score;
        }
        nd[i].score /= nd[i].num;
    }
    int sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += nd[i].score;
    }
    sum /= n;
    for (int i = 0; i < n; i++) {
        if (nd[i].score < sum) {
            cout << i + 1 << ' ';
        }
    }
}
