#include "p5594.h"
void p5594()
{
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    int ans = 0;
    int day[k] = {0}, note[k] = {0};
    int store[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%d", &store[i][j]);
            
        }
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(note[store[j][i] - 1] != 0){   // ÖØ¸´µÄÉ¾³ıÁË
                continue;
            }
            ++note[store[j][i] - 1];
            ++day[store[j][i] - 1];
        }
        memset(note, 0, sizeof(int) * k);
    }
    for(int i = 0; i < k; ++i){
        cout << day[i] << ' ';
    }
}