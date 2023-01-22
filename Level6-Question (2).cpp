#include<bits/stdc++.h>
using namespace std;
struct node
{
    int len;
    int a[35];
    char b[35];
}nd[100005];
int n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d",&nd[i].len);
        for (int j = 0; j < nd[i].len; j++) {
            scanf("%d",&nd[i].a[j]);
        }
        scanf("%s",nd[i].b);
    } 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < nd[i].len; j++) {
            printf("%d ",nd[i].a[j]);
        }
        printf("%s",nd[i].b);
        printf("\n");
    }
    return 0;
}
