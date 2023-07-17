#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n;
string tre;
string num;
queue<string> que;

void bfs()
{
    while (que.size()) {
        string hd = que.front();
        que.pop();
        bool one, ziro;
        one = ziro = false;
        for (int i = 0; i < hd.size(); i++) {
            if (hd[i] == '1') {
                one = true;
            }
            else if (hd[i] == '0') {
                ziro = true;
            }
        }
        if (ziro && !one) {
            cout << 'B';
        }
        else if(!ziro && one) {
            cout << 'I';
        }
        else if (ziro && one) {
            cout << 'F';
        }
        que.push(hd.substr(0, hd.size() / 2));
        que.push(hd.substr(hd.size() / 2, hd.size() - 1));
        if (hd.size() == 1) {
            break;
        }
    }
}

int main()
{
    cin >> n;
    cin >> tre;
    que.push(tre);
    bfs();
}