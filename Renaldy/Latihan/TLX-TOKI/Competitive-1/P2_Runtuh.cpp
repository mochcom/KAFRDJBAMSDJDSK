#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    string matriks[21];
    for(int i = 0; i < r; i++){
        cin >> matriks[i];
    }
    int batas = 0;
    while(batas != -1){
        batas = -1;
        for(int i = 0; i < r; i++){
            int full = 0;
            for(int j = 0; j < c; j++){
                if(matriks[i][j] == '1'){
                    full++;
                }
            }
            if(full == c){
                for(int j = 0; j < c; j++){
                    matriks[i][j] = '0';
                }
                batas = i;
            }
        }
        for(int j = 0; j < c; j++){
            for(int i = batas; i >= 0; i--){
                if(matriks[i][j] == '1'){
                    int terakhir = i;
                    while(terakhir + 1 < r && matriks[terakhir + 1][j] == '0'){
                        terakhir++;
                    }
                    matriks[i][j] = '0';
                    matriks[terakhir][j] = '1';
                }
            }
        }
    }
    for(int i = 0; i < r; i++){
        cout << matriks[i] << "\n";
    }
    return 0;
}